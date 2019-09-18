/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 15:15:04 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/25 15:34:42 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (av[1][i] == 'Z')
					av[1][i] = 'A';
				else
					av[1][i] = av[1][i] + 1;
			}
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				if (av[1][i] == 'z')
					av[1][i] = 'a';
				else
					av[1][i] = av[1][i] + 1;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
