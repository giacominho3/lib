/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:43:59 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/15 16:57:25 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	inizio(const char *s1, const char *set)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (s1[x] && set[y])
	{
		while (s1[x] != set[y] && set[y])
			y++;
		if (s1[x] == set[y])
		{
			y = 0;
			x++;
		}
	}
	return (x);
}

int	fine(const char *s1, const char *set)
{
	int	z;
	int	x;
	int	y;

	x = inizio(s1, set);
	y = 0;
	z = (ft_strlen((char *)s1) - 1);
	while (z > x && set[y])
	{
		while (s1[z] != set[y] && set[y])
			y++;
		if (s1[z] == set[y])
		{
			y = 0;
			z--;
		}
	}
	return (z);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*sf;
	int		x;
	int		y;
	int		z;

	if (s1 == 0)
		return (0);
	x = inizio(s1, set);
	y = 0;
	z = fine(s1, set);
	sf = (char *)malloc(z - x + 2);
	if (sf == 0)
		return (0);
	while (x <= z)
	{
		sf[y] = s1[x];
		x++;
		y++;
	}
	sf[y] = '\0';
	return (sf);
}
