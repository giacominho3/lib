/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:18:16 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/09 15:43:20 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
		*ptr++ = c;
	return (b);
}

void	*ft_memcpy(void *dest, const void *src, int n)
{
	void	*temp;

	temp = (void *)src;
	while (n--)
	{
		ft_memset(dest, *(int *)temp, 1);
		temp++;
		dest++;
	}
	return (temp);
}
