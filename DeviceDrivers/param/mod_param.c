//command line arguments/parameters 
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include <linux/moduleparam.h>

static char* charvar = "module_param";
static int var = 100;

module_param(charvar,charp,S_IRUGO);
module_param(var,int,S_IRUGO);

static int __init init_param(void)
{
    printk(KERN_ALERT "inside init function \n");
    printk(KERN_ALERT "print value of charvar %s \n",charvar);
    printk(KERN_ALERT "variable= %d \n",var);
    
    return 0;
}

static void __exit exit_param(void)
{
    printk(KERN_ALERT "exited the init function \n");
    
}

module_init(init_param);
module_exit(exit_param);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("KT");

