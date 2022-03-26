//command line arguments/parameters as arrays
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include <linux/moduleparam.h>

static char charvar[20];
static int var[5];
static int count,i,sum=0;
static char str;

module_param_string(charvar,charvar,20,S_IRUSR);

module_param_array(var,int,&count,S_IRUSR);

static int __init init_param(void)
{
    printk(KERN_ALERT "inside init function \n");
    printk(KERN_ALERT "print value of charvar %s \n",charvar);
    for(i=0;i<5;i++)
    {
    printk(KERN_ALERT "variable = %d ",var[i]);
    sum += var[i];
    }
    printk(KERN_ALERT "sum = %d\n",sum);
    
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

