/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:49 by abismail          #+#    #+#             */
/*   Updated: 2024/11/06 11:56:49 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putnbr_fd(int number, int fd)
{
	int	mod;

	if (number == -2147483648)
		write(fd, "-2147483648", 11);
	else if (number > 9)
	{
		mod = number % 10 + 48;
		number = number / 10;
		putnbr_fd(number, fd);
		write(fd, &mod, 1);
	}
	else if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
		putnbr_fd(number, fd);
	}
	else if (number <= 9)
	{
		number = number + 48;
		write(fd, &number, 1);
	}
}
