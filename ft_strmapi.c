/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:15:02 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/15 18:04:05 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mod;

	if (s == 0 || f == 0)
		return (0);
	i = 0;
	mod = malloc(ft_strlen((char *)s) + 1);
	if (!mod)
		return (0);
	while (s[i])
	{
		mod[i] = (*f)(i, s[i]);
		i++;
	}
	mod[i] = '\0';
	return (mod);
}
