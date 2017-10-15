# What is this?

**pf-kernel** is yet another Linux kernel fork which provides you with a handful of awesome features not merged into mainline. It is based on neither existing Linux fork nor patchset, although some unofficial ports may be used if required patches haven't been released officially. The name of the fork is by **no means** related to BSD Packet Filter. «pf» stands for «post-factum», the author's nickname.

# How to get it?

Latest release is: v4.13-pf9

* tarball: [click](https://github.com/pfactum/pf-kernel/archive/v4.13-pf9.tar.gz)
* patch: [click](https://github.com/pfactum/pf-kernel/compare/569dbb88e80deb68974ef6fdd6a13edb9d686261...v4.13-pf9.diff) (_applies to bare kernel only with **no stable patches**_)

# What's there?

* [stable kernel update](https://git.kernel.org/cgit/linux/kernel/git/stable/linux-stable.git/)
* [PDS CPU scheduler](https://cchalpha.blogspot.com/)
* [graysky's GCC patch](https://github.com/graysky2/kernel_gcc_patch)
* [UKSM](https://pf.natalenko.name/kerneldedup.org/en/projects/uksm/)
* [blk-mq performance patchset](https://marc.info/?l=linux-block&m=150797307912556&w=2)
* [blk-mq suspend-to-RAM fix](https://marc.info/?l=linux-block&m=150675195718390&w=2)
* random fixes here and there

# I have an idea!

Please, [let me know](mailto:oleksandr@natalenko.name).

# Reminder

[GPLv2 says](https://www.gnu.org/licenses/gpl-2.0.html): this program is distributed in the hope that it will be useful, but **WITHOUT ANY WARRANTY**; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. Keep this in mind.
