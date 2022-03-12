/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:02:51 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/12 15:15:27 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(const char *haystack, const char *needle, int loc)
{
	while (*haystack && *needle && loc)
	{
		if (*haystack != *needle)
		{
			return (0);
		}
		haystack++;
		needle++;
		loc--;
	}
	return (*needle == '\0');
}

char	*ft_strnstr(const char *haystack, const char *needle, int loc)
{
	int	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && loc)
	{
		if ((*haystack == *needle) && ft_compare(haystack, needle, loc))
		{
			return ((char *)haystack);
		}
		haystack++;
		loc--;
	}
	return (0);
}
