/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:24:56 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/15 17:02:38 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_striteri(const char *s, char (*f)(char))
{
	char	*mod;
	char	*head;

	if (s == 0 || f == 0)
		return (0);
	mod = malloc(ft_strlen((char *)s) + 1);
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
