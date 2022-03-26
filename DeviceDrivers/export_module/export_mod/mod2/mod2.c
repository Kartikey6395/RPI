#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
//#include <linux/moduleparam.h>
#include "my_add.h"

static int __init add_init(void)
{
    printk(KERN_ALERT "init module2 \n");
    printk(KERN_ALERT "result = %d\n",my_add(10,50));
    return 0;
}

static void __exit add_exit(void)
{
    printk(KERN_ALERT "exit mod2 function\n");
}

module_init(add_init);
module_exit(add_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("KT");
MODULE_DESCRIPTION("export symbol for mod1 mod2");