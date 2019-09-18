/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 19:18:07 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/02 22:00:40 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] && av[2][j])
	{
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				len++;
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	if (len == ft_strlen(av[1]))
	{
		write(1, av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
