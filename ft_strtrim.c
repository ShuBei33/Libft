/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:00:22 by estoffel          #+#    #+#             */
/*   Updated: 2021/06/26 22:15:53 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strndup(const char *s1, size_t n)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	len = ft_strlen(s1);
	if (len < n)
		ptr = malloc(sizeof(char) * (len + 1));
	else
		ptr = malloc(sizeof(char) * (n + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < n && s1[i])
	{
		ptr[i] = s1[i];
		++i;
	}
	ptr[i] = 0;
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		--i;
	output = ft_strndup(s1, i);
	return (output);
}
