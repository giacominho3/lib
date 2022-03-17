/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:15:02 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/17 17:30:04 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mod;

	if (!s || !f)
		return (0);
	mod = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!mod)
		return (0);
	i = 0;
	while (s[i])
	{
		mod[i] = f(i, s[i]);
		i++;
	}
	mod[i] = '\0';
	return (mod);
}
