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

char	*ft_substr(const char *s, unsigned int start, int len)
{
	char	*sub;
	char	*head;
	int		i;

	sub = (char *)malloc(len + 1);
	if (!sub)
		return (0);
	head = sub;
	i = 0;
	if ((int)start >= ft_strlen((char *)s))
		return (0);
	while ((i < len) && (s[start] != '\0'))
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (head);
}
