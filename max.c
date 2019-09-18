/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 14:35:42 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/01 14:41:00 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int		max;
	unsigned char	i;

	if (len == 0)
		return (0);
	i = 1;
	max = tab[0];
		while (i < len)
		{
			if (max < tab[i])
				max = tab[i];
			i++;
		}
	return (max);
}

int		main(void)
{
	int	array[4] = {2, 3, 4, 5};
	printf("%d", max(array, 4));
}
