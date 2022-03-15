/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:24:56 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/14 18:14:39 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		cont++;
		str++;
	}
	return (cont);
}

char	*ft_striteri(const char *s, char (*f)(char))
{
	char	*mod;
	char	*head;

	if (s == 0 || f == 0)
		return (0);
	mod = malloc(ft_strlen(s) + 1);
	head = mod;
	while (*s)
	{
		*mod = (*f)(*s);
		s++;
		mod++;
	}
	*mod = '\0';
	return (head);
}
