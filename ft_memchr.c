/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:04:12 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/16 11:20:49 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	char	*temp;

	temp = (char *)s;
	while (n--)
	{
		if (*temp == c)
			return ((void *)temp);
		temp++;
	}
	return (0);
}
