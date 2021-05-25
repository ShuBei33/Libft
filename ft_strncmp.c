/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 17:56:23 by estoffel          #+#    #+#             */
/*   Updated: 2021/05/25 17:24:26 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < (n - 1)) && (*s1 == *s2) && (*s1 && *s2))
	{
		i++;
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (-1);
	if (*s1 == *s2)
		return (0);
	else
		return (1);
}
