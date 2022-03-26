#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

int my_add(int a,int b)
{
    return (a + b);
}

EXPORT_SYMBOL(my_add);

static int __init init_expo(void)
{
    printk(KERN_ALERT "add functionality export symbol\n");
    return 0;
}

static void __exit exit_expo(void)
{
    printk(KERN_ALERT "exit export symbol \n");
}

module_init(init_expo);
module_exit(exit_expo);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("KT");
