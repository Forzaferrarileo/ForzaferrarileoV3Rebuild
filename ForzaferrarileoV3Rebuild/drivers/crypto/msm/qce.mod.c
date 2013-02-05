#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xba61ca5, "module_layout" },
	{ 0x1b69b0da, "dma_map_sg" },
	{ 0xd5152710, "sg_next" },
	{ 0x2ffe44a7, "dma_unmap_sg" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0x247e89fc, "clk_disable" },
	{ 0x84aee1de, "dma_alloc_coherent" },
	{ 0x24d698ef, "platform_get_resource_byname" },
	{ 0x8ff97ceb, "__msm_ioremap" },
	{ 0x22501ca7, "platform_get_resource" },
	{ 0x6de2f0a7, "clk_get" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0x7d36b0de, "clk_enable" },
	{ 0x5f754e5a, "memset" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b0db4fa, "dma_free_coherent" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x1900269b, "_dev_info" },
	{ 0xa6fd40da, "dev_err" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0xe4d14011, "msm_dmov_enqueue_cmd" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DF855483E8E9FB41EC929F8");
