#include <linux/init.h>     // must exist
#include <linux/module.h>   // must exist
#include <linux/list.h> // list_head
#include <linux/kernel.h> // printk

struct birthday
{
    int day;
    int month;
    int year;
    struct list_head list;
};

// define 
static LIST_HEAD(birthday_list);

int hw_init(void)
{
    printk(KERN_INFO "Loading Module\n");
    return 0;
}

void hw_exit(void)
{
    printk(KERN_INFO "Removing Module\n");
}

MODULE_LICENSE("GPL");  // license
MODULE_DESCRIPTION("My OS HW2");
MODULE_AUTHOR("Kelvin Yang");

module_init(hw_init);
module_exit(hw_exit);