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
	{ 0x5f417014, "input_register_handler" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0x7d93ea, "input_open_device" },
	{ 0x1361784, "input_register_handle" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf109bbde, "input_unregister_handle" },
	{ 0x186adfc2, "input_close_device" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2e96b3b, "input_unregister_handler" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
