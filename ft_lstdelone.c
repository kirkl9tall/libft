/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
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


void del(void* pointer)
{
    free(((t_list*)pointer)->content); 
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}
