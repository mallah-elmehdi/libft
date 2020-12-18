/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:21:40 by emallah           #+#    #+#             */
/*   Updated: 2019/10/29 15:33:06 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t x);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(const char *s, const char *s0);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, char c);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int a);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(char *dest, const char *src, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_calloc(size_t a, size_t b);
void	ft_bzero(void *p, size_t n);
int		ft_atoi(const char *s);
int		ft_isprint(int m);
int		ft_isdigit(int a);
int		ft_isascii(int m);
int		ft_isalpha(int a);
int		ft_isalnum(int a);
int		ft_toupper(int a);
int		ft_tolower(int a);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_memcmp(const void *s1, const char *s2, size_t n);
#endif
