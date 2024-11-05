#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *list;
    *list = new;
}
