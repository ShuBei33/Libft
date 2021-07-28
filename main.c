/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:49:10 by estoffel          #+#    #+#             */
/*   Updated: 2021/06/21 16:08:49 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

//atoi//

int	main(void)
{
	int		libc_res;
	int		ft_res;

	libc_res = atoi("   -+42 c'est mieux que 21");
	ft_res = ft_atoi("   -+42 c'est mieux que 21");
	printf("libc_res == %d\n", libc_res);
	printf("ft_res   == %d\n", ft_res);
	return (0);
}

//itoa//

int	main(int agc, char **argv)
{
	if (agc > 3 || agc == 1)
	{
		printf("Error argument \n");
		return (0);
	}
	printf("------------\n%s \n", argv[1]);
	printf("ft_itoa |%s| \n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}

//split//


int	main(void)
{
	char	**split;
	void	*dent;
	char	s[] = "hdhy  hf\0thyi jutdd joo";

	split = ft_split(s, '\0');
	if (split)
	{
		dent = split;
		while (*split)
		{
			printf("|%s|\n", *split);
			free(*split++);
		}
		printf("|%s|\n", *split);
		free(dent);
	}
	return (0);
}

//isascii//


int	ft_isascii(int c);

int	main(void)
{
	printf("my isascii : %d\n", ft_isascii('c'));
	printf("true isascii : %d\n", isascii('c'));
	return (0);
}
