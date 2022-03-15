/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:15:02 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/14 16:28:03 by gifulvi          ###   ########.fr       */
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

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mod;

	if (s == 0 || f == 0)
		return (0);
	i = 0;
	mod = malloc(ft_strlen(s) + 1);
	while (s[i])
	{
		mod[i] = (*f)(i, s[i]);
		i++;
	}
	mod[i] = '\0';
	return (mod);
}
