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
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c62d042, "cpu_possible_mask" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x42224298, "sscanf" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa0fb7bd2, "atomic_notifier_chain_register" },
	{ 0x645d64c3, "proc_mkdir" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0x5856edd3, "thread_notify_head" },
	{ 0x137dd7b5, "pp_interrupt_in_ptr" },
	{ 0xbe267192, "pp_process_remove_ptr" },
	{ 0xdc5aad31, "pp_interrupt_out_ptr" },
	{ 0xf3934df5, "pp_loaded" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x35ec28e8, "atomic_notifier_chain_unregister" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c89c7c8, "remove_proc_entry" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x39a341a, "create_proc_entry" },
	{ 0xf74bd974, "pm_op_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x27e1a049, "printk" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

