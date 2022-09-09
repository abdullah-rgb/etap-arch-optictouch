#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa8a8f63a, "module_layout" },
	{ 0xab6085aa, "class_destroy" },
	{ 0x691e5208, "usb_deregister" },
	{ 0x9d8f6221, "usb_register_driver" },
	{ 0x45c554bb, "__class_create" },
	{ 0x79a1ec51, "device_create" },
	{ 0xc1765f3e, "cdev_add" },
	{ 0x4790e5b1, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x68fb2297, "input_register_device" },
	{ 0x2c33598f, "input_mt_init_slots" },
	{ 0x9193d407, "input_set_abs_params" },
	{ 0x28318305, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0x371b3439, "input_allocate_device" },
	{ 0x335a9b92, "kmem_cache_alloc_trace" },
	{ 0x15380e1f, "kmalloc_caches" },
	{ 0x7005955b, "usb_interrupt_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xafb217e1, "input_event" },
	{ 0x8f10babd, "input_mt_report_slot_state" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0xa00199a2, "usb_control_msg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf382df7f, "input_free_device" },
	{ 0x94f1d715, "input_unregister_device" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3f05a3b6, "device_destroy" },
	{ 0x7c32d0f0, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v2621p2201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2621p4501d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C746FB52A9F94B05415D15");
