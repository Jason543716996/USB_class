#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xec5ba0f9, "module_layout" },
	{ 0xd608518f, "video_ioctl2" },
	{ 0x108e8985, "param_get_uint" },
	{ 0x3285cc48, "param_set_uint" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x26cd9b20, "wake_up_process" },
	{ 0xd21d7ffe, "kthread_create" },
	{ 0x4d47f11f, "videobuf_queue_vmalloc_init" },
	{ 0xd0d8621b, "strlen" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7d11c268, "jiffies" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x220ea949, "videobuf_to_vmalloc" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x650fb346, "add_wait_queue" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x35c2ba9e, "refrigerator" },
	{ 0x71356fba, "remove_wait_queue" },
	{ 0xb281b25f, "per_cpu__current_task" },
	{ 0x294238cc, "video_device_release" },
	{ 0xd721f839, "video_register_device" },
	{ 0x96f0ab10, "video_device_alloc" },
	{ 0xcf40a52a, "__mutex_init" },
	{ 0xffc7c184, "__init_waitqueue_head" },
	{ 0x6de66014, "v4l2_device_register" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x4661e311, "__tracepoint_kmalloc" },
	{ 0x142c23f8, "kmem_cache_alloc" },
	{ 0x28849590, "kmalloc_caches" },
	{ 0x4c574b17, "videobuf_read_stream" },
	{ 0x227d13e2, "videobuf_poll_stream" },
	{ 0x591c4710, "videobuf_mmap_mapper" },
	{ 0x1043d8ec, "videobuf_iolock" },
	{ 0x19d4aaaf, "videobuf_vmalloc_free" },
	{ 0xe0443364, "videobuf_mmap_free" },
	{ 0xea093159, "videobuf_stop" },
	{ 0x7eef101, "kthread_stop" },
	{ 0x99e9d7f4, "video_devdata" },
	{ 0xe914e41e, "strcpy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x8fcbb584, "mutex_unlock" },
	{ 0x5054f6a2, "videobuf_queue_is_busy" },
	{ 0xc24b2ca4, "mutex_lock" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xd2b5761a, "videobuf_reqbufs" },
	{ 0x8de39a79, "videobuf_querybuf" },
	{ 0xaeabf2fb, "videobuf_qbuf" },
	{ 0xc1a8b74, "videobuf_dqbuf" },
	{ 0x3f443929, "videobuf_cgmbuf" },
	{ 0x234d02df, "videobuf_streamon" },
	{ 0x9edc496e, "videobuf_streamoff" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x99be9168, "v4l2_device_unregister" },
	{ 0x10da6881, "video_unregister_device" },
	{ 0xb72397d5, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf-vmalloc,videobuf-core,v4l2-common";


MODULE_INFO(srcversion, "8973394A06DD689060CBF4D");
