#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
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
__used __section("__versions") = {
	{ 0x133d294f, "module_layout" },
	{ 0xfa83b84e, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1492003b, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdb884948, "cdev_add" },
	{ 0x3c327871, "cdev_init" },
	{ 0xb6d7cfb2, "cdev_alloc" },
	{ 0x5f4228d6, "kmem_cache_alloc_trace" },
	{ 0xa773c546, "kmalloc_caches" },
	{ 0x602182e, "class_destroy" },
	{ 0xa2ae57e3, "device_create" },
	{ 0x441cbcdc, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x92997ed8, "_printk" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B747B812C4C4442D0A46147");
