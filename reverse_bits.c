/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:25:48 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/03 22:24:41 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	rest;

	i = 0;
	while (i < 8)
	{
		rest <<= 1;
		rest = (octet & 1) | rest;
		octet >>= 1;
		i++;
	}
	return (rest);
}

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i;
    unsigned char div;

    i = 0;
    div = 128;
    while (i < 8)
    {
        if ((octet & div) > 0)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        div >>= 1;
        i++;
    }
}
int		main()
{	
	unsigned char x = 5;
	print_bits(reverse_bits(x));
}
