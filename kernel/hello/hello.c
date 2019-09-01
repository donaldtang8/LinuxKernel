#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/sched.h>

static int hello_init(void)
{
	printk(KERN_ALERT "Hello World from Donald Tang (10410463)");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "PID: %d\n Process Name: %s\n", (int) task_pid_nr(current), current->comm);
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("Dual BSD/GPL");

