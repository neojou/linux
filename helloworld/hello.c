#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("Hello World!");
//MODULE_AUTHER("Neo");
MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
    pr_info("Hello, world\n");
    //pr_info("The process is \"%s\" (pid %i)\n", 
    //	current->comm, current->pid);
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "GOOdbye\n");
}

module_init(hello_init);
module_exit(hello_exit);


