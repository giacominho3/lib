/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifulvi <gifulvi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:40:19 by gifulvi           #+#    #+#             */
/*   Updated: 2022/03/10 16:40:22 by gifulvi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *str, char *to_find, int len);
int				ft_atoi(char *str);
void			*ft_memset(void *b, int c, int len);
void			ft_bzero(void *s, int n);
void			*ft_memcpy(void *dest, const void *src, int n);
void			*ft_memmove(void *str1, const void *str2, int n);
void			*ft_memchr(const void *s, int c, int n);
int				ft_memcmp(const void *s1, const void *s2, int n);
void			*ft_calloc(int count, int size);
char			*ft_strdup(const char *s);
char			*ft_substr(const char *s, unsigned int start, int len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			**ft_split(char **str);
char			*ft_itoa(int n);

#endif
