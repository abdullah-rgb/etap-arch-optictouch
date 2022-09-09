# OpticTouch driver for Vestel 14MB24A on Arch Linux

You need 4.19.257 kernel version. You can get it from the address: https://github.com/abdullah-rgb/etap-linux419 

## Before Installation:

```shell
yay -S touchegg

clear

yay -S touche

clear

sudo systemctl enable touchegg

sudo systemctl start touchegg
```

## Installation:

```shell
git clone https://github.com/abdullah-rgb/etap-arch-optictouch ~/optictouch

cd ~/optictouch

sudo cp -r lib/* /lib/ && sudo cp -r usr/* /usr/

sudo systemctl enable eta-touchdrv && sudo systemctl start eta-touchdrv

cd /usr/src/eta-touchdrv-0.2.0/touch2/

sudo make

sudo insmod OpticalDrv.ko

cd /usr/src/eta-touchdrv-0.2.0/touch4/

sudo make

sudo insmod OtdDrv.ko

sudo systemctl restart eta-touchdrv

sudo systemctl restart touchegg
```
