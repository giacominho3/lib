/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:19:21 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/07 16:25:50 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		cont++;
		str++;
	}
	return (cont);
}

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*temp;

	temp = (char *)s;
	len = ft_strlen(temp);
	while (*temp != '\0')
		temp++;
	while (len >= 0)
	{
		if (s[len] == c)
			return (temp);
		len--;
		temp--;
	}
	return (0);
}
