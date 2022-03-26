#include <linux/module.h>
#include <linux/init.h>

static int hello_init(void)
{
    printk("hello there\n");
    return 0;
}

static void hello_exit(void)
{
    printk("goodbye\n");
}


module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");

MODULE_AUTHOR("CDAC");

MODULE_DESCRIPTION("A simple hello kernel module");

