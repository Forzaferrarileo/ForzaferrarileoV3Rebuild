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
	{ 0x1d8b857a, "single_release" },
	{ 0xcae0cec3, "seq_read" },
	{ 0x11bd15de, "seq_lseek" },
	{ 0x1424f59, "sg_copy_to_buffer" },
	{ 0x8371daff, "sg_copy_from_buffer" },
	{ 0x9050fe5a, "mmc_register_driver" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x66b2a859, "nr_free_buffer_pages" },
	{ 0xd62ed93c, "contig_page_data" },
	{ 0x8f02f0cf, "mmc_release_host" },
	{ 0xcda579ad, "__mmc_claim_host" },
	{ 0x724c9ea4, "__alloc_pages_nodemask" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x62c3540c, "mmc_can_trim" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x21ad3418, "mem_map" },
	{ 0x52760ca9, "getnstimeofday" },
	{ 0xd5152710, "sg_next" },
	{ 0xe036e348, "page_address" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0x1c1af916, "set_normalized_timespec" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0x1900269b, "_dev_info" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0xa6fd40da, "dev_err" },
	{ 0x3346a912, "debugfs_create_file" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0x491bd6a7, "mmc_set_blocklen" },
	{ 0x8cb62d05, "mmc_erase" },
	{ 0xdfe74867, "mmc_can_erase" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x73c17d7d, "mmc_wait_for_req" },
	{ 0x27e1a049, "printk" },
	{ 0x9246ff9, "mmc_wait_for_cmd" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xb582d4a2, "mmc_set_data_timeout" },
	{ 0x46b85791, "mmc_unregister_driver" },
	{ 0xadac3909, "debugfs_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b9c4c7e, "__free_pages" },
	{ 0x92f19309, "mutex_unlock" },
	{ 0x7acbd3bd, "seq_printf" },
	{ 0xa771f656, "mutex_lock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5ba4bc1e, "single_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

