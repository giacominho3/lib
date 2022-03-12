/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:26:47 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/12 16:30:33 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n && *(unsigned char *)(s1 + x) == (*(unsigned char *)(s2 + x)))
	{
		x++;
		if (x == n)
			return (0);
	}
	return (*(unsigned char *)(s1 + x) - (*(unsigned char *)(s2 + x)));
}
