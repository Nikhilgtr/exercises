#setenv bootargs "console=ttyS0,115200n8 root=/dev/mmcblk0p2 rw rootfstype=ext4 rootwait"
#setenv ipaddr 192.168.1.100; setenv serverip 192.168.1.9; tftpboot $loadaddr zImage; fatwrite mmc 0:1 $loadaddr zImage $filesize; tftpboot $fdtaddr am335x-boneblack.dtb; bootz $loadaddr - $fdtaddr

if [ ! -d "bck_img" ]; then
    mkdir bck_img
fi

cd bck_img

DATE=`date +"%d_%b"`
FOLDER_BCK="${DATE}"

if [ ! -d "bck_img" ]; then
    mkdir $FOLDER_BCK
fi
sudo cp ../output/images/zImage $FOLDER_BCK
sudo cp ../output/images/am335x-boneblack.dtb $FOLDER_BCK

sudo cp ../output/images/zImage /var/lib/tftpboot/
sudo cp ../output/images/am335x-boneblack.dtb /var/lib/tftpboot/

#update nfs file path
sudo rm /srv/nfs/rootfs/* -rf
sudo tar xf ../output/images/rootfs.tar -C /srv/nfs/rootfs/

sudo exportfs -ra
sudo systemctl restart nfs-kernel-server

echo done

exit
