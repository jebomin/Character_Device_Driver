obj-m	:= dummy_driver.o

KDIR	:= /lib/modules/$(shell uname -r)/build

PWD	:= $(shell pwd)

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
	
clean:
	rm -rf *.ko
	rm -rf *.mod.*
	rm -rf .*.cmd
	rm -rf *.o
	rm -rf *.symvers
	rm -rf *.mod
	rm -rf *.order
