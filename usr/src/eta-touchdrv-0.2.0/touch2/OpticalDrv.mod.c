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
	{ 0x9e891c7d, "module_layout" },
	{ 0x1ac69aca, "usb_deregister" },
	{ 0xc3790a79, "usb_register_driver" },
	{ 0xbf68a519, "usb_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x606c274c, "input_register_device" },
	{ 0x89b9c95b, "input_mt_init_slots" },
	{ 0x5715265d, "input_set_abs_params" },
	{ 0x28318305, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3b204cfc, "usb_alloc_urb" },
	{ 0xafac68ed, "usb_alloc_coherent" },
	{ 0x571fc102, "input_allocate_device" },
	{ 0x4ae78e5e, "kmem_cache_alloc_trace" },
	{ 0x472ca76b, "kmalloc_caches" },
	{ 0x3cc72c60, "usb_find_interface" },
	{ 0xb544962c, "usb_kill_urb" },
	{ 0x7c32d0f0, "printk" },
	{ 0xff16ef39, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd6a61737, "input_mt_report_slot_state" },
	{ 0xace74dfe, "input_event" },
	{ 0xcd589750, "usb_control_msg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x60b40fd8, "copy_user_enhanced_fast_string" },
	{ 0xe5772d4a, "copy_user_generic_string" },
	{ 0xdcc3a419, "copy_user_generic_unrolled" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a0c11e8, "input_free_device" },
	{ 0x571b7ae5, "usb_free_coherent" },
	{ 0xa380057, "usb_free_urb" },
	{ 0xcb419762, "input_unregister_device" },
	{ 0x5c4aa7f, "usb_deregister_dev" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v6615p0084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0085d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0087d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0C20d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E389D3BC65318CC388F02A7");
