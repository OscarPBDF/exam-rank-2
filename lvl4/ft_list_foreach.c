/*
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	if(list_ptr && f)
	{
		while(list_ptr)
		{
			(*f)(list_ptr->data);
			list_ptr= list_ptr->next;
		}
	}
	
}
/*
void	ft_toupper(void *str)
{
	int i = 0;
	
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
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
	
   ft_list_foreach(&f_list, ft_toupper);

}*/