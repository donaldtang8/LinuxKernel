#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/slab.h>

asmlinkage signed int sys_my_syscall2(char *ptr)
{
	int len = strlen(ptr);
	char *newStr = kmalloc(len, GFP_KERNEL);
	int i;
	int count = 0;
	if (len > 128) {
		return -1;
	}
	for (i = 0; i < len; i++) {
		if (ptr[i] == 'o') {
			newStr[i]='0';
			count++;
		} else {
			newStr[i]=ptr[i];
		}
	}
	return count;
}
