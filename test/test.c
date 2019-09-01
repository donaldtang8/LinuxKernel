#include <linux/string.h>
#include <sys/syscall.h>
#include <stdio.h>

#define sys_my_syscall 548
#define sys_my_syscall2 549

void main(int argc, char *argv[]) {
	char *a1 = argv[1];
	int arg1 = atoi(a1);
	char *a2 = argv[2];
	int arg2 = atoi(a2);
	char* arg3 = "helloooooooo";

	printf("Making system call 1 with arguments %d and %d \n", arg1, arg2);
	int res = syscall(sys_my_syscall, arg1, arg2);
	printf("System call 1 returned %ld\n", res);

	printf("Making system call 2 with argument %s\n", arg3);
	int res2 = syscall(sys_my_syscall2, arg3);
	printf("System call 2 returned %ld\n", res2);
}
