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
	{ 0x28849590, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x856ba71, "remap_vmalloc_range" },
	{ 0x4661e311, "__tracepoint_kmalloc" },
	{ 0x7bbd944, "videobuf_queue_cancel" },
	{ 0x8fcbb584, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xff964b25, "param_set_int" },
	{ 0xb72397d5, "printk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xc24b2ca4, "mutex_lock" },
	{ 0x142c23f8, "kmem_cache_alloc" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x87456b1, "videobuf_queue_core_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core";


MODULE_INFO(srcversion, "6A744BEBFAB6F6B2A6B03E5");
