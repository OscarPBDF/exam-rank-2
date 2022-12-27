/*
Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

*/

#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
    int count = 1;

    while(begin_list->next != 0)
    {
        begin_list = begin_list->next;
        count++;
    }
    return(count);
}
#include <stdio.h>
int main(void)
{
    t_list f_list;
    t_list s_list;
    t_list th_list;
    char str[] = "abcd";

    f_list.data = str;
    s_list.data = str;
    th_list.data = str;
    
    f_list.next = &s_list;
    s_list.next = &th_list;
    printf("%i",ft_list_size(&th_list));
}