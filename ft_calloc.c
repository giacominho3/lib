/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:16:06 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/17 17:27:00 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int count, int size)
{
	void	*mem;
	int		total;

	total = count * size;
	mem = malloc(total);
	if (mem == 0)
		return (0);
	ft_memset(mem, '\0', total);
	return (mem);
}
