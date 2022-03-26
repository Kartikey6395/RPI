cmd_/home/pi/DeviceDrivers/pi_native/modules.order := {   echo /home/pi/DeviceDrivers/pi_native/hello.ko; :; } | awk '!x[$$0]++' - > /home/pi/DeviceDrivers/pi_native/modules.order
