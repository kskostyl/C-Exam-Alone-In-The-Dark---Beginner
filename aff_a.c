/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 13:15:46 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/24 13:40:59 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	char	*s;

	while (ac != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	i = 0;
	s = av[1];
	while (s[i])
	{
		if (s[i] == 'a')
		{
			write(1, "a", 1);
			break;
		}
		i += 1;
	}
	write(1, "\n", 1);
}
