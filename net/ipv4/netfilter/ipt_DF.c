#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#include <linux/in.h>
#include <linux/module.h>
#include <linux/skbuff.h>
#include <linux/ip.h>
#include <net/ip.h>
#include <linux/tcp.h>
#include <net/checksum.h>

#include <linux/netfilter/x_tables.h>
#include <linux/netfilter_ipv4/ip_tables.h>
#include <linux/netfilter_ipv4/ipt_DF.h>

MODULE_AUTHOR("Dmitry Labutcky <avl@strace.net>");
MODULE_DESCRIPTION("IP tables remove DF flag module");
MODULE_LICENSE("GPL");

static unsigned int df_tg(struct sk_buff *skb,
			  const struct xt_action_param *par)
{

	struct iphdr *iph;
	const struct ipt_DF_info *info = par->targinfo;
	u_int16_t diffs[2];

	if (!skb_make_writable(skb, skb->len))
		return NF_DROP;

	iph = ip_hdr(skb);

	if (info->mode != IPT_DF_CLEAR)
		return XT_CONTINUE;

	if (!(iph->frag_off & 0x0040))
		return XT_CONTINUE;

	diffs[0] = htons(((unsigned)iph->frag_off) << 8) ^ 0xFFFF;
	iph->frag_off = iph->frag_off & 0xFFBF;
	diffs[1] = htons(((unsigned)iph->frag_off) << 8);
	iph->check = csum_fold(csum_partial((char *)diffs,
					    sizeof(diffs),
					    iph->check ^ 0xFFFF));

	return XT_CONTINUE;

}

static int df_tg_check(const struct xt_tgchk_param *par)
{
	return 0;
}

static struct xt_target df_tg_reg __read_mostly = {
	.name = "DF",
	.family = NFPROTO_IPV4,
	.target = df_tg,
	.targetsize = sizeof(struct ipt_DF_info),
	.table = "mangle",
	.checkentry = df_tg_check,
	.me = THIS_MODULE,
};

static int __init df_tg_init(void)
{
	return xt_register_target(&df_tg_reg);
}

static void __exit df_tg_exit(void)
{
	xt_unregister_target(&df_tg_reg);
}

module_init(df_tg_init);
module_exit(df_tg_exit);

