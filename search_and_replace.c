/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:09:46 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/25 01:14:16 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	int i;
	i = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
