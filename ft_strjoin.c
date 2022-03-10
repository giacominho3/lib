/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:44:41 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/09 18:19:16 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
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

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*conc;

	conc = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	i = 0;
	j = 0;
	while (i < ft_strlen((char *)s1))
		conc[j++] = s1[i++];
	i = 0;
	while (i < ft_strlen((char *)s2))
		conc[j++] = s2[i++];
	return (conc);
}
