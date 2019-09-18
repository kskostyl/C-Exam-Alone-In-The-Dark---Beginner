/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 12:19:46 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/02 12:34:03 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *s1)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*d;
	int		i;

	i = 0;
	d = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (d == 0)
		return (NULL);
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int		main()
{
	char *src;

	src = "Hello";
	printf("%s\n", ft_strdup("fgjoithjoi"));
	return (0);
}
