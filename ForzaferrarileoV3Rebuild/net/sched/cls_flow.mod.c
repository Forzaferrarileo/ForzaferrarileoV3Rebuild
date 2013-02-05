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
	{ 0x443d12bb, "register_tcf_proto_ops" },
	{ 0x61cc99a8, "tcf_action_exec" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe8793d86, "__skb_get_rxhash" },
	{ 0x598841d1, "__tcf_em_tree_match" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfa33fe18, "__pskb_pull_tail" },
	{ 0x45e60c00, "del_timer" },
	{ 0x966047f9, "tcf_exts_change" },
	{ 0x3b7d44bd, "init_timer_deferrable_key" },
	{ 0x9f387ab1, "tcf_em_tree_validate" },
	{ 0x7556ec91, "tcf_exts_validate" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0xf20e108e, "kmalloc_caches" },
	{ 0xe739d9f6, "kmem_cache_alloc_trace" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd78b46bc, "mod_timer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcc7fa952, "local_bh_enable_ip" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x27e1a049, "printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0x71c4437d, "tcf_em_tree_destroy" },
	{ 0x5352b4bc, "tcf_exts_destroy" },
	{ 0xf9295f1b, "del_timer_sync" },
	{ 0x91b4440f, "skb_trim" },
	{ 0x18ef98c9, "tcf_exts_dump_stats" },
	{ 0x770fca05, "tcf_em_tree_dump" },
	{ 0x18157687, "tcf_exts_dump" },
	{ 0xa9f5dc7, "nla_put" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x26d8e40f, "unregister_tcf_proto_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

