#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


void del(void* pointer)
{
    free(((t_list*)pointer)->content); 
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}