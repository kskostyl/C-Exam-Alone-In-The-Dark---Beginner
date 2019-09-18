/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 12:00:34 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/01 12:21:49 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdlib.h>
#include <stdio.h> */

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n >= 2)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

/* int		main(void)
{
	printf ("%d", is_power_of_2(4));
	printf ("%d", is_power_of_2(6));
	printf("%d", is_power_of_2(0));
	printf("%d", is_power_of_2(1));
} */
