/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:26:47 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/09 16:42:53 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	char	*temp1;
	char	*temp2;

	temp1 = (void *)s1;
	temp2 = (void *)s2;
	while (*temp1 && *temp2 && n--)
	{
		if (*temp1 == *temp2)
		{
			temp1++;
			temp2++;
		}
		else
			return (*temp1 - *temp2);
	}
	return (0);
}
