#include <linux/init.h>		//简单驱动引用的库
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");	//开源协议描述
MODULE_AUTHOR("Luali Liu");	//作者描述
MODULE_DESCRIPTION("Linux Driver");	//驱动描述

static int hello_init(void){	//驱动模块初始化
	printk(KERN_ALERT "Hello, world.\n");	//内核打印
	return 0;
}
static void hello_exit(void)	//驱动模块退出函数
{
	printk(KERN_ALERT "Goodbye.\n");
}

module_init(hello_init);	//模块初始化
module_exit(hello_exit);	//模块退出
