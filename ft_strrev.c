/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 13:12:16 by kskostyl          #+#    #+#             */
/*   Updated: 2019/04/15 21:13:35 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 #include <stdlib.h>

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		b;

	i = 0;
	while (str[i]) //counting lengh
		i++;
	i--; //reverse reading
	b = 0;
	while (i > b)
	{
		temp = str[i];
		str[i] = str[b];
		str[b] = temp;
		i--;
		b++;
	}
	return (str);
}

 int		main()
{
	char ks[100] = "helloworld";
	printf("%s\n", ft_strrev(ks));
	return (0);
}
