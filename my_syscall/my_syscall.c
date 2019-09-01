#include <linux/kernel.h>
//#include <stdio.h>

asmlinkage int sys_my_syscall(int x, int y)
{
	int z = x + y;
	printk("The sum of the two integers is: %d\n", z);
	return z;
}
