/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:44:41 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/16 18:06:24 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*conc;
	int		l1;
	int		l2;

	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	conc = (char *)malloc(l1 + l2 + 1);
	if (conc == 0)
		return (0);
	i = 0;
	j = 0;
	while (i < l1)
		conc[j++] = s1[i++];
	i = 0;
	while (i < l2)
		conc[j++] = s2[i++];
	conc[j] = '\0';
	return (conc);
}
