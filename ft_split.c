/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:50:35 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/17 17:33:03 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_separator(char c, char sep)
{
	if (c == sep)
		return (1);
	else
		return (0);
}

int	ft_not_all_seps(char *str, char sep)
{
	while (*str != '\0')
	{
		if (!(ft_is_separator(*str, sep)))
			return (1);
		str++;
	}
	return (0);
}

int	ft_count_seps(char *str, char sep)
{
	int	cont;
	int	i;

	cont = 0;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i - 1], sep) && !(ft_is_separator(str[i], sep)))
			cont++;
		i++;
	}
	if (ft_is_separator(str[0], sep) && ft_not_all_seps(str, sep))
		cont--;
	return (cont + 1);
}

int	ft_till_next_sep(char *str, char sep)
{
	int	cont;

	cont = 0;
	while (ft_is_separator(*str, sep))
			str++;
	while (!(ft_is_separator(*str, sep)) && *str)
	{
		cont++;
		str++;
	}
	return (cont);
}

char	**ft_split(const char *str, char c)
{
	int		sep;
	int		i;
	int		j;
	char	**array;
	char	*s;

	s = (char *)str;
	if (!s)
		return (0);
	sep = ft_count_seps(s, c);
	i = 0;
	array = malloc((sep + 1) * sizeof(char *));
	if (!array)
		return (0);
	while (i < sep)
	{
		while (ft_is_separator(*s, c))
			s++;
		array[i] = malloc(ft_till_next_sep(s, c) + 1);
		if (&array[i] == 0)
			return (0);
		j = 0;
		while (!(ft_is_separator(*s, c)) && *s)
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

// int main()
// {
// 	char	**a = ft_split("\0aa\0bbb", '\0');
// 	for (int i = 0; a[i]; i++)
// 		printf("%s\n", a[i]);

// }
