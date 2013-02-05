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
	{ 0xe72c0167, "register_qdisc" },
	{ 0x1041c766, "__qdisc_calculate_pkt_len" },
	{ 0xff59c4e6, "kfree_skb" },
	{ 0xcf633c7b, "tc_classify" },
	{ 0x6cc43851, "pskb_expand_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c67f6a1, "qdisc_destroy" },
	{ 0xd3ffe1b6, "tcf_destroy_chain" },
	{ 0xbc4de36d, "noop_qdisc" },
	{ 0xa16e514b, "pfifo_qdisc_ops" },
	{ 0xcc7fa952, "local_bh_enable_ip" },
	{ 0x141c9a29, "qdisc_tree_decrease_qlen" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x27e1a049, "printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb4ccf8cc, "qdisc_create_dflt" },
	{ 0xd5c13430, "qdisc_reset" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x91b4440f, "skb_trim" },
	{ 0xa9f5dc7, "nla_put" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xb4ee3168, "unregister_qdisc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

