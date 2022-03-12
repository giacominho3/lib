/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:18:16 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/12 16:16:59 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	void	*head;

	head = dest;
	if (dest == 0 && src == 0)
		return (0);
	while (n--)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		src++;
		dest++;
	}
	return (head);
}
