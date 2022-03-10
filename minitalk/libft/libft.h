/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbass <@student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:02:31 by mbass             #+#    #+#             */
/*   Updated: 2021/11/06 16:59:43 by mbass            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int	c);
int		ft_isalpha(int c);
int		ft_isascii(int	c);
int		ft_isdigit(int	c);
int		ft_isprint(int	c);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t n);
void	*ft_memset(void *a, int	c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *str, int fd);
char	*ft_strchr(const char *s, int	c);
char	*ft_strdup(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *hay, const char *need, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int	c);
int		ft_toupper(int	c);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
#endif
