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
	{ 0xba61ca5, "module_layout" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0x5934392b, "fb_register_client" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfca74f8, "device_register" },
	{ 0xc5e9b7a6, "dev_set_drvdata" },
	{ 0x66683c4, "dev_set_name" },
	{ 0xfacc71c, "__mutex_init" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7d0ab94, "device_unregister" },
	{ 0xcc36f32e, "fb_unregister_client" },
	{ 0x11089ac7, "_ctype" },
	{ 0x92f19309, "mutex_unlock" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xa771f656, "mutex_lock" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x27e1a049, "printk" },
	{ 0xc7ddc74a, "__class_create" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xef0cf18b, "class_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

