#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xec5ba0f9, "module_layout" },
	{ 0xe90dcae0, "__request_module" },
	{ 0xd0d8621b, "strlen" },
	{ 0x62e861df, "i2c_new_probed_device" },
	{ 0x26fd80b9, "per_cpu__cpu_number" },
	{ 0x6c2e3320, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x3ec05838, "i2c_unregister_device" },
	{ 0xaec6d674, "v4l2_device_unregister_subdev" },
	{ 0xa11de823, "module_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x63e1672e, "v4l2_device_register_subdev" },
	{ 0x7ecb001b, "__per_cpu_offset" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xa0340703, "i2c_new_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "51CDD2A517838D314098CBA");
