#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int ft_lstsize(t_list *lst)
{   
    int count;
    
    t_list *ptr;
    
    count = 0;
    ptr = lst;
    while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        return(count);
}