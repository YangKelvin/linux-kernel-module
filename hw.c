#include <linux/list.h> // list_head
struct birthday
{
    int day;
    int month;
    int year;
    struct list_head list;
}