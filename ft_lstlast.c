#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


t_list *ft_lstlast(t_list *lst)
{   
    int count;
    
    t_list *ptr;
    
    count = 0;
    ptr = lst;
    while (ptr != NULL)
        {
            ptr = ptr->next;
        }
    return (ptr);
}