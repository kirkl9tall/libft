/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
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

t_list *ft_lstnew(void *content)
{
    t_list *node = NULL;
    node = malloc (sizeof(t_list));
    node->content = content;
    node->next = NULL;
    return (node);
}

