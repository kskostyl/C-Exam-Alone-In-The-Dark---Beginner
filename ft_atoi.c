/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 12:44:34 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/01 14:06:40 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		rez;

	i = 0;
	sign = 0;
	rez = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rez = rez * 10;
		rez += str[i] - 48;
		i++;
	}
	if (sign)
		return (-rez);
	else
		return (rez);
}

/* int		main(void)
{
	printf("%d", ft_atoi("89789"));
} */
