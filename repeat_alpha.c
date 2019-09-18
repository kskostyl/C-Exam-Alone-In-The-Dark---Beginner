/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 21:31:10 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/24 23:06:53 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	int		position;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				position = av[1][i] - 96;
				while (position > 0)
				{
					write(1, &av[1][i], 1);
					position--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
					position = av[1][i] - 64;
					while (position > 0)
					{
						write(1, &av[1][i], 1);
						position--;
					}
				}
			else
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
