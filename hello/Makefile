# 交叉编译
# export ARCH=arm
# export CROSS_COMPILE=arm-linux-gnueabihf-

KERNEL ?= /lib/modules/$(shell uname -r)/build	# 指定内核源代码位置
obj-m += hello.o				# 指定源代码.c编译为.o
all:
	make -C $(KERNEL) M=$(PWD) modules	# 编译成模块
clean:
	make -C $(KERNEL) M=$(PWD) clean	# 清空编译文件
