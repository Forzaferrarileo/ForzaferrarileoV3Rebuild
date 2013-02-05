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
	{ 0x8242ff5d, "crypto_aead_type" },
	{ 0xc1ca25d, "crypto_ahash_type" },
	{ 0xcb1dbe6c, "crypto_ablkcipher_type" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xae5cd04d, "platform_driver_register" },
	{ 0x3346a912, "debugfs_create_file" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xc57c7bbd, "debugfs_create_dir" },
	{ 0x26e4dbd9, "crypto_register_ahash" },
	{ 0x1900269b, "_dev_info" },
	{ 0xa6fd40da, "dev_err" },
	{ 0xe64dd321, "crypto_register_alg" },
	{ 0xc3593841, "msm_bus_scale_register_client" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc5e9b7a6, "dev_set_drvdata" },
	{ 0x8ca0b843, "qce_open" },
	{ 0xcfd9a2c0, "des_ekey" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xad998077, "complete" },
	{ 0xfc6e8775, "__init_waitqueue_head" },
	{ 0x92f19309, "mutex_unlock" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0xa771f656, "mutex_lock" },
	{ 0xe3f0223, "wait_for_completion_interruptible" },
	{ 0x1d3036bf, "crypto_enqueue_request" },
	{ 0x21ad3418, "mem_map" },
	{ 0xbe917b8a, "qce_aead_req" },
	{ 0xd5152710, "sg_next" },
	{ 0xe036e348, "page_address" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0xa4de4b0b, "crypto_dequeue_request" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8949858b, "schedule_work" },
	{ 0x71c90087, "memcmp" },
	{ 0x91dda801, "scatterwalk_map_and_copy" },
	{ 0x7a4497db, "kzfree" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x9d669763, "memcpy" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x575c81e1, "qce_close" },
	{ 0x37a0cba, "kfree" },
	{ 0x25f1bb8c, "crypto_unregister_ahash" },
	{ 0xa5f8958e, "crypto_unregister_alg" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0x8566725e, "dev_get_drvdata" },
	{ 0x935f95d0, "platform_driver_unregister" },
	{ 0x1bf09888, "debugfs_remove_recursive" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce";


MODULE_INFO(srcversion, "2B12B3AD9154F781A49F877");
