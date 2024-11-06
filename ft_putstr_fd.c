/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putstr_fd(char *str, int fd)
{
	int	x;

	x = 0;
	while (str[x])
		write(fd, &str[x++], 1);
}
/*
int	main(void)
{

char	s[] = "said";
int		df = open ("abdo.txt", O_WRONLY);
putstr_fd(s, df);
}*/
