.PHONY: all clean

KERNEL_VER := $(shell uname -r)
KERNEL_DIR := /usr/src/linux-headers-$(KERNEL_VER)
PWD := $(shell pwd)
MODULE_NAME=hw
obj-m := $(MODULE_NAME).o
all:
	make -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	make -C $(KERNEL_DIR) M=$(PWD) clean