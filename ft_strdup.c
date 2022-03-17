/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:48:05 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/17 17:29:10 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*temp;
	char	*head;

	temp = (char *)s;
	dup = (char *)malloc(ft_strlen(temp) + 1);
	if (!dup)
		return (0);
	head = dup;
	while (*temp)
	{
		*dup = *temp;
		dup++;
		temp++;
	}
	*dup = '\0';
	return (head);
}
