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
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xae5cd04d, "platform_driver_register" },
	{ 0x3346a912, "debugfs_create_file" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xc57c7bbd, "debugfs_create_dir" },
	{ 0xad998077, "complete" },
	{ 0x1a21dacb, "misc_register" },
	{ 0xc3593841, "msm_bus_scale_register_client" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0xc5e9b7a6, "dev_set_drvdata" },
	{ 0x8ca0b843, "qce_open" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x21ad3418, "mem_map" },
	{ 0xafce9e9c, "put_pmem_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2fb7a1f, "get_pmem_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0x7a4497db, "kzfree" },
	{ 0x27e1a049, "printk" },
	{ 0x92f19309, "mutex_unlock" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0xa771f656, "mutex_lock" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x926cf10d, "misc_deregister" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0x575c81e1, "qce_close" },
	{ 0x8566725e, "dev_get_drvdata" },
	{ 0x935f95d0, "platform_driver_unregister" },
	{ 0x1bf09888, "debugfs_remove_recursive" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce";


MODULE_INFO(srcversion, "01ADB61CF65176B8CA28B67");
