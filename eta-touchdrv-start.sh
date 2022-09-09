insmod /usr/src/eta-touchdrv-0.2.0/touch2/OpticalDrv.ko
insmod /usr/src/eta-touchdrv-0.2.0/touch4/OtdDrv.ko

systemctl restart touchegg
systemctl restart eta-touchdrv
