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
	{ 0xb281b25f, "per_cpu__current_task" },
	{ 0x14f332ea, "up_read" },
	{ 0x6980fe91, "param_get_int" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x8eb58c6e, "__wake_up_sync" },
	{ 0x8fcbb584, "mutex_unlock" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0xafe01377, "down_read" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0xcf40a52a, "__mutex_init" },
	{ 0xb72397d5, "printk" },
	{ 0xc24b2ca4, "mutex_lock" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x4292364c, "schedule" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x9ccb2622, "finish_wait" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "17E59FF15BC4EFF6DBF34DB");
