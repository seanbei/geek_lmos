# 把下面的代码复制，然后插入到/boot/grub/grub.cfg文件中 
# 然后把HelloOS.bin文件复制到/boot/目录下
# 最后重启计算机就可以看到HelloOS启动选项了

#original
menuentry 'HelloOS' {
    insmod part_msdos
    insmod ext2
    set root='hd0,msdos4' #注意boot目录挂载的分区，这是我机器上的情况
    multiboot2 /boot/HelloOS.bin
    boot
}

#My config, please refer to your grub.cfg file, there you can see whether
#gpt or msdos is used.
#Also, you should check if /boot/HelloOS.bin or /HelloOS.bin is avaliable.
menuentry 'HelloOS' {
    insmod part_gpt
    insmod ext2
    set root='hd0,gpt2'
    multiboot2 /HelloOS.bin
    boot
}
