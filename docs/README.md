# What is this?

**pf-kernel** is a desktop-oriented Linux kernel fork. Its name is by **no means** related to BSD Packet Filter. "pf" stands for "post-factum", the author's nickname.

[Follow @pfkernel](https://twitter.com/pfkernel)

# OK, what's there in your patchset?

Currently, pf-kernel incorporates:

* [stable kernel update](https://git.kernel.org/cgit/linux/kernel/git/stable/linux-stable.git/)
* [PDS CPU scheduler](https://cchalpha.blogspot.com/)
* [graysky's GCC patch](https://github.com/graysky2/kernel_gcc_patch)
* [UKSM](http://kerneldedup.org/en/projects/uksm/) (_also, on [GitHub](https://github.com/dolohow/uksm)_)
* [BFQ improvements](https://groups.google.com/forum/#!forum/bfq-iosched)
* random fixes here and there

As you may see, it improves interactiveness and performance, saves some memory and fixes nasty bugs.

# How to get it?

Latest release is: [v4.16-pf4](https://github.com/pfactum/pf-kernel/releases/latest), [patch](https://github.com/pfactum/pf-kernel/compare/v4.16...v4.16-pf4.diff) (_applies to bare kernel only with **no stable patches**_)

You can also check [full list of all releases](https://github.com/pfactum/pf-kernel/releases).

To get a specific patch, use the following URL template:

```
https://github.com/pfactum/pf-kernel/compare/v<base>...v<base>-pf<release>.diff
```

## But I want binary builds!

There are Arch Linux official binaries available for some architectures (_64-bit only_):

* [generic](https://build.opensuse.org/package/show/home:post-factum:kernels/linux-pf-generic)
* [Intel Silvermont](https://build.opensuse.org/package/show/home:post-factum:kernels/linux-pf-silvermont)
* [Intel Skylake](https://build.opensuse.org/package/show/home:post-factum:kernels/linux-pf-skylake)

### Where is Fedora, Gentoo etc?

Some unofficial packages are maintained here:

* [Gentoo](http://packages.gentoo.org/package/sys-kernel/pf-sources)
* Fedora [specs](https://github.com/Hubbitus/kernel) and [binaries](http://rpm.hubbitus.info/)

Please don't ask me to fix or update them, I just host some links. But if you know that some other distributions also support pf-kernel, let me know.

#### I saw linux-pf package in AUR, is it supported?

No, since it is maintained by other people. But I still leave some links to it here:

* [linux-pf](https://aur.archlinux.org/packages/linux-pf) with some enhancements
* [linux-pf-lts](https://aur.archlinux.org/packages/linux-pf-lts) if you are too lazy to use latest version

# I have some idea for you!

Please, [let me know](mailto:oleksandr@natalenko.name).

# Reminder

[GPLv2 says](https://www.gnu.org/licenses/gpl-2.0.html): this program is distributed in the hope that it will be useful, but **WITHOUT ANY WARRANTY**; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. Keep this in mind.
