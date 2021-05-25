/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:36:56 by estoffel          #+#    #+#             */
/*   Updated: 2021/05/25 19:42:19 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);

size_t	strlcat(char *dst, const char *src, size_t dstsize);
size_t	strlcpy(char *dst, const char *src, size_t dstsize);

void	ft_swap(int *a, int *b);

#endif