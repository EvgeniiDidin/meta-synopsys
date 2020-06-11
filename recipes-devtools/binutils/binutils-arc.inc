LIC_FILES_CHKSUM="\
    file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552\
    file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674\
    file://COPYING3;md5=d32239bcb673463ab874e80d47fae504\
    file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6\
    file://gas/COPYING;md5=d32239bcb673463ab874e80d47fae504\
    file://include/COPYING;md5=59530bdf33659b29e73d4adb9f9f6552\
    file://include/COPYING3;md5=d32239bcb673463ab874e80d47fae504\
    file://libiberty/COPYING.LIB;md5=a916467b91076e631dd8edb7424769c7\
    file://bfd/COPYING;md5=d32239bcb673463ab874e80d47fae504\
    "

SRCREV ?= "arc-2020.03-release"

SRC_URI = "\
     git://github.com/foss-for-synopsys-dwc-arc-processors/binutils-gdb;protocol=https;branch=arc-2020.03; \
     file://0004-Point-scripts-location-to-libdir.patch \
     file://0008-don-t-let-the-distro-compiler-point-to-the-wrong-ins.patch \
     file://0001-Revert-ARC-Add-default-reggroups.patch \
     file://0002-Revert-arc-Ignore-Metaware-extension-.cfa_info.patch \
     file://0003-Revert-dwarf2-Add-arguments-to-gdbarch_execute_dwarf.patch \
"
S  = "${WORKDIR}/git"

