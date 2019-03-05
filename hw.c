#include <linux/init.h>     // must exist
#include <linux/module.h>   // must exist
#include <linux/list.h>     // list_head
#include <linux/kernel.h>   // printk
#include <linux/types.h>    // list head structor
#include <linux/slab.h>     // kmalloc
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
    printk(KERN_INFO "Loading Module...\n");

    struct birthday *person;
    
    person = kmalloc(sizeof(*person), GFP_KERNEL);
    person->day = 2;
    person->month = 8;
    person->year = 1995;
    
    printk (KERN_INFO "The list be constructed\n");
    INIT_LIST_HEAD(&person->list);
    // list_add_tail(*new_lis, *head)
    list_add_tail(&person->list, &birthday_list);
    list_for_each_entry(person, &birthday_list, list)
    {
        printk(KERN_INFO "Day:%d Month:%d Year:%d\n", person->day, person->month, person->year);
    }
    return 0;
}

void hw_exit(void)
{
    struct birthday *person, *next;
    list_for_each_entry_safe(person, next, &birthday_list, list)
    {
        printk(KERN_INFO "Freeding node");
        list_del(&person->list);
        kfree(person);
    }
    printk(KERN_INFO "Removing Module\n");
}

MODULE_LICENSE("GPL");  // license
MODULE_DESCRIPTION("My OS HW2");
MODULE_AUTHOR("Kelvin Yang");

module_init(hw_init);
module_exit(hw_exit);