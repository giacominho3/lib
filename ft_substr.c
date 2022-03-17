/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:13:18 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/09 17:40:25 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, size_t start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	if ((int) start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if ((int)len > ft_strlen((char *)s))
		len = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j++] = s[i];
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
