/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:36:43 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/15 18:03:43 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_power(int base, int exp)
{
	int	power;

	if (exp == 0)
		return (1);
	power = 1;
	while (exp--)
		power *= base;
	return (power);
}

void	ft_fill_string(char *s, int n, int len)
{
	int	p;

	if (n < 0)
	{
		*s = '-';
		s++;
		len--;
		n = -n;
	}
	if (len < 1)
		return ;
	p = ft_power(10, (len - 1));
	*s = (n / p) + 48;
	s++;
	len--;
	ft_fill_string(s, (n % p), len);
}

int	ft_get_length(int value)
{
	int	l;

	l = !value;
	while (value)
	{
		l++;
		value /= 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
	{
		str = malloc(12);
		if (!str)
			return (0);
		str = "-2147483648";
		return (str);
	}
	len = 0;
	if (n < 0)
		len++;
	len += ft_get_length(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	ft_fill_string(str, n, len);
	str[len] = '\0';
	return (str);
}
