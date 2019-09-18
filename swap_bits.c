/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 12:01:22 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/03 12:51:16 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}


#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int     i;
    unsigned char   div;

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


int       main()
{
    print_bits(swap_bits(5));
}
