/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:56:48 by estoffel          #+#    #+#             */
/*   Updated: 2021/06/02 16:54:26 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s != (char)c)
			++s;
		else
			return ((char *)s);
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
