/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:02:51 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/10 11:53:26 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(const char *str, const char *to_find, int len)
{
	while (*str && *to_find && len)
	{
		if (*str != *to_find)
		{
			return (0);
		}
		str++;
		to_find++;
		len--;
	}
	return (*to_find == '\0');
}

char	*ft_strnstr(const char *str, const char *to_find, int len)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (*str != '\0' && len)
	{
		if ((*str == *to_find) && ft_compare(str, to_find, len))
		{
			return ((char *)str);
		}
		str++;
		len--;
	}
	return (0);
}
