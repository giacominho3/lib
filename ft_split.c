/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:50:35 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/12 16:18:37 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_separator(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);
	else
		return (0);
}

int	ft_not_all_seps(char *str)
{
	while (*str != '\0')
	{
		if (!(ft_is_separator(*str)))
			return (1);
		str++;
	}
	return (0);
}

int	ft_count_seps(char *str)
{
	int	cont;
	int	i;

	cont = 0;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i - 1]) && !(ft_is_separator(str[i])))
			cont++;
		i++;
	}
	if (ft_is_separator(str[0]) && ft_not_all_seps(str))
		cont--;
	if (!(ft_not_all_seps(str)))
		return (0);
	return (cont + 1);
}

int	ft_till_next_sep(char *str)
{
	int	cont;

	cont = 0;
	while (!(ft_is_separator(*str)))
	{
		cont++;
		str++;
	}
	return (cont);
}

char	**ft_split(char *s)
{
	int		sep;
	int		i;
	int		j;
	char	**array;

	sep = ft_count_seps(s);
	i = 0;
	array = malloc((sep + 1) * sizeof(char *));
	while (i < sep)
	{
		array[i] = malloc(ft_till_next_sep(s) + 1);
		j = 0;
		while (ft_is_separator(*s))
			s++;
		while (!(ft_is_separator(*s)))
		{
			array[i][j] = *s;
			j++;
			s++;
		}
		array[i][j] = '\0';
		i++;
	}
	array[i] = 0;
	return (array);
}
