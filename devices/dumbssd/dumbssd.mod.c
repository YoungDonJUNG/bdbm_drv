#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xbc884195, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xaa28a96, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9447c79f, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xc377750c, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xceb25626, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x33134013, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x99bf8c43, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xf19316e3, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xb0059ec3, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x32850c6c, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xef95113, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0xd8bb8c0b, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x604534fb, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfb40a555, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xe0fd59de, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x90f4ac56, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1bac2a83, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x782ad4c2, __VMLINUX_SYMBOL_STR(blk_mq_alloc_request) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0xe565f950, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x49cebae7, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9597f3c8, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xbb61ea9e, __VMLINUX_SYMBOL_STR(blk_mq_free_request) },
	{ 0xb52a4576, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xf467724f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x8daa027c, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6c662899, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x15e657d6, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x938ae75f, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x15fba080, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x61673682, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf71f0205, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7736A51032D656AABAF27FF");
