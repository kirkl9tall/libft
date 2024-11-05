#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    ptr = *lst;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = *new;
}