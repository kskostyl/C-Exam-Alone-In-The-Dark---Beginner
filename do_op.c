/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 15:03:30 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/01 15:21:51 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int		num1;
	int		num2;
	int		rez;
	char	op;

	if (ac == 4)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[3]);
		rez = 0;
		op = (av[2][0]);

		if (op == '+')
			rez = num1 + num2;
		else if (op == '-')
			rez = num1 - num2;
		else if (op == '*')
			rez = num1 * num2;
		else if (op == '/')
			rez = num1 / num2;
		else if (op == '%')
			rez = num1 % num2;
		printf("%d", rez);
	}
	printf("\n");
	return (0);
}
