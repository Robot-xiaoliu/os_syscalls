/*
 *  linux/lib/new_syscalls.c
 *
 *  (C) 1991  Linus Torvalds
 */

// 修改 
#define __LIBRARY__

#include <unistd.h>
#include <linux/kernel.h>

int execve2(const char *path, char * argv[], char * envp[]){
    /*
    功能：
        以⽴即加载⽅式执⾏⼀个指定的程序。此系统调⽤开始后，该进程不应再发⽣代码段和数据段中的缺⻚故障。
    输入：
        path: 待执⾏程序路径名称，
        argv: 程序的参数，
        envp: 环境变量的数组指针
    返回值：
        成功不返回，失败返回-1
    */
    return -1;
}
int getdents(unsigned int fd, struct linux_dirent *dirp, unsigned int count){
    /*
    功能：
        获取⽬录的⽬录项。
    输⼊：
        fd：所要读取⽬录的⽂件描述符。
        dirp：⼀个缓存区，⽤于保存所读取⽬录的信息。缓存区的结构如下：
    返回值：
        成功执⾏，返回读取的字节数。当到⽬录结尾，则返回0。失败，则返回-1
    */
    return 0;
}
int sleep(unsigned int seconds){
    /*
    功能：
        执⾏进程睡眠；
    输⼊：
        睡眠的时间间隔；seconds: 秒
    返回值：
        成功返回0，失败返回-1;
    */
    printk("new_syscalls :: ok!!");
    return 0;
}
long getcwd(char * buf, size_t size){
    /*
    功能：
        获取当前⼯作⽬录； 
    输⼊：
        char *buf：⼀块缓存区，⽤于保存当前⼯作⽬录的字符串。当buf设为NULL，由系统来分配缓存区。
        size：buf缓存区的⼤⼩。
    返回值：
        成功执⾏，则返回当前⼯作⽬录的字符串的指针。失败，则返回NULL。
    */
    return NULL;
}