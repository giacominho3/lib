/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:07:11 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/14 12:42:49 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, const char *src, int size)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		y++;
	}
	if (size <= x)
		y = y + size;
	else
		y = y + x;
	while (src[z] != '\0' && (x + 1) < size)
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x] = '\0';
	return (y);
}
