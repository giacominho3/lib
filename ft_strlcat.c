/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:07:11 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/12 15:07:41 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

unsigned int	ft_strlcat(const char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*temp;

	i = ft_strlen((char *)dest);
	j = 0;
	temp = (char *)dest;
	if (size < 1)
		return (ft_strlen((char *)src) + size);
	while (src[j] && i < size - 1)
	{
		temp[i] = src[j];
		i++;
		j++;
	}
	temp[i] = '\0';
	if ((int)size < (ft_strlen((char *)dest)))
		return (ft_strlen((char *)src) + size);
	else
		return (ft_strlen((char *)dest) + ft_strlen((char *)src));
}
