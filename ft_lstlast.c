/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:52:02 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:24 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
