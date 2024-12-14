cmd_/home/bomin/firstproject/modules.order := {   echo /home/bomin/firstproject/dummy_driver.ko; :; } | awk '!x[$$0]++' - > /home/bomin/firstproject/modules.order
