#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list *node = NULL;
    node = malloc (sizeof(t_list));
    node->content = content;
    node->next = NULL;
    return (node);
}

