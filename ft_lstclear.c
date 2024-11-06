/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:52:02 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:24 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




void del(void* pointer)
{
    free(((t_list*)pointer)->content); 
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *ptr;
    t_list *ptr2;

    ptr = *lst;
    ptr2 = *list;
    while (ptr!= NULL)
    {
        del(ptr);
        ptr2 = ptr->next;
        free(ptr2);
        ptr = ptr->next;
    }
    free(*lst);

}
