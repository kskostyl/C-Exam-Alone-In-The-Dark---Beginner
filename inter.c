/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 15:34:53 by kskostyl          #+#    #+#             */
/*   Updated: 2019/03/02 16:38:08 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int    i;
        int    j;
        int    temp[127] = {0};

        j = 0;
        while (av[2][j])
        {
            if (temp[(int)av[2][j]] == 0)
                temp[(int)av[2][j]] = 1;
            j++;
        }
        i = 0;
        while (av[1][i])
        {
            if (temp[(int)av[1][i]] == 1)
            {
                temp[(int)av[1][i]] = 2;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}