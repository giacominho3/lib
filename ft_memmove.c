/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:45:47 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/15 17:37:27 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *str1, const void *str2, int n)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = str1;
	s = str2;
	if (!str1 && !str2 && !n)
		return (0);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
	lasts = s + (n - 1);
	lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (str1);
}
