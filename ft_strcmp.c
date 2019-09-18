/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 23:56:08 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/01 00:51:39 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		main()
{
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return (0);
}
