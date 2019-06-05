/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:26:12 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/05 16:17:08 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <ctype.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(void *dest, void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *str, int i);
int		ft_strcmp(char *str1, char *str2);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dest, const  char *src, size_t size);
int		ft_strlen(char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *str, char *dest, size_t n);
char	*ft_strnstr(const char *str1, const char str2, size_t len);
char	ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
int		ft_strstr(char *str1, char *str2);
int		ft_tolower(char c);
int		ft_toupper(char c);

#endif
