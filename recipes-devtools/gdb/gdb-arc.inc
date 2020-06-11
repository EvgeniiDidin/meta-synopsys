LICENSE = "GPLv2 & GPLv3 & LGPLv2 & LGPLv3"
LIC_FILES_CHKSUM = " \
	file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552 \
	file://COPYING.LIB;md5=9f604d8a4f8e74f4f5140845a21b6674 \
	file://COPYING3;md5=d32239bcb673463ab874e80d47fae504 \
	file://COPYING3.LIB;md5=6a6a8e020838b23406c81b19c1d46df6 \
"

SRCREV ?= "arc-2020.03-release-gdb"


SRC_URI = "git://github.com/foss-for-synopsys-dwc-arc-processors/binutils-gdb.git;protocol=https;branch=arc-2020.03; \ 
           "
SRC_URI[md5sum] = "73b6a5d8141672c62bf851cd34c4aa83"
SRC_URI[sha256sum] = "1e55b4d7cdca7b34be12f4ceae651623aa73b2fd640152313f9f66a7149757c4"
