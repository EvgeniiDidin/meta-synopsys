FILESEXTRAPATHS_prepend := "${THISDIR}/linux-arc:"
DESCRIPTION = "Kernel image for the ARC architecture"
SECTION = "kernel"

LICENSE = "GPLv2"

inherit kernel

SRC_URI = "https://www.kernel.org/pub/linux/kernel/v5.x/linux-${PV}.tar.xz \
	file://0001-ARC-HSDKv2-add-perf-interrupts-in-dts.patch \
	file://0002-HSDKv2-add-dw-hdmi-platform.patch \
	file://0003-drm-arcpgu-rework-encoder-search.patch \
	file://0004-DRM-ARC-PGU-fix-framebuffer-format-switching.patch \
	file://0005-DRM-ARC-PGU-cleanup-supported-format-list-code.patch \
	file://0006-DRM-ARC-PGU-replace-unsupported-by-HW-RGB888-format-.patch \
	file://0007-DRM-ARC-PGU-add-ARGB8888-format-to-supported-format-.patch \
	file://0008-ARC-HSDKv2-add-PGU-and-HDMI-nodes.patch \
	file://0009-ARC-HSDKv2-use-hs4x_rel31-to-fix-HW-issues.patch \
	file://0010-ARC-HSDKv2-tweak-graphic-defconfig-options.patch \
	file://0011-mmc-dw_mmc-Take-care-about-card_number-field-in-CMD-.patch \
	file://0012-HSDK-disable-loop-buffer.patch \
	file://0013-HSDKv2-add-wifi-SDIO-node-to-dts.patch \
	file://0014-CLK-HSDK-check-if-PLL-is-bypassed-first.patch \
	file://0015-HSDK-disable-loop-buffer-on-slave-CPUs-too.patch \
	file://0016-HSDKv2-WiFi-apply-platform-quirks.patch \
	file://0017-HSDKv2-enable-net-wifi-hdmi-config-options.patch \
	file://0018-DRM-ARC-PGU-interlaced-mode-not-supported.patch \
	file://0019-HDMI-fix-PHY-settings-for-high-pixelclock.patch \
	file://0020-HDMI-allow-pixel-clocks-27MHz.patch \
	file://0021-CLK-HSDK-CGU-support-PLL-bypass-add-hdmi-clock-optio.patch \
	file://0022-HSDK-use-configurable-pixel-clock-instead-of-fixed-o.patch \
"



S = "${WORKDIR}/linux-${PV}"

DEPENDS += " libgcc"
KERNEL_CC_append = " ${TOOLCHAIN_OPTIONS}"

KERNEL_DEFCONFIG_hsdk = "hsdk"
KERNEL_DEFCONFIG_nsimhs = "nsim_hs"
KERNEL_CONFIG_COMMAND = "oe_runmake -C ${S} O=${B} ${KERNEL_DEFCONFIG}_defconfig"

KERNEL_CLASSES = ""

do_configure_append() {
	echo 'CONFIG_INITRAMFS_SOURCE=""' >> ${B}/.config
}
