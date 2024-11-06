/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:52:02 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:24 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void (*f)(void * head)
{
    while (head->next != NULL)
        head = head->next; 
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst->next != NULL)
    {
        f(lst->content);
        lst = lst->next;
    } 
}
