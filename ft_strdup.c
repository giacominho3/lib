/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:48:05 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/09 18:01:13 by gifulvi          ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*temp;
	char	*head;

	temp = (char *)s;
	dup = (char *)malloc(ft_strlen(temp) + 1);
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
