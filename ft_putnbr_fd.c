/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:13:26 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/17 17:35:15 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printer(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		printer('-', fd);
		printer('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		printer('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n <= 9)
	{
		c = n + '0';
		printer(c, fd);
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
		c = ((n % 10) + '0');
		printer(c, fd);
	}
}
