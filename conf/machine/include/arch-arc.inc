TUNEVALID[bigendian] = "Enable big-endian mode"

TUNE_ARCH = "${@bb.utils.contains('TUNE_FEATURES', 'bigendian', 'arceb', 'arc', d)}"

MACHINE_FEATURES_BACKFILL_CONSIDERED_append = " qemu-usermode"

# Uncomments next line and comment line with "linux-arc"/"linux-yocto"
# in case of linux-arc/linux-yocto build
#PREFERRED_PROVIDER_virtual/kernel ?= "linux-yocto"
#PREFERRED_PROVIDER_virtual/kernel ?= "linux-arc"
PREFERRED_PROVIDER_virtual/kernel ?= "linux-yocto-dev"

# Otherwise huge binaries (>32MiB) might fail to link due to
# limitation of 25-bit R_ARC_S25H_PCREL_PLT relocation
GLIBC_EXTRA_OECONF_arc += " --with-nonshared-cflags=-mlong-calls"
