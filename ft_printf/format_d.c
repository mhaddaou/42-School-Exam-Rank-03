/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:24:53 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/06/01 19:54:09 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int len_d (long nb )
{
    int count;

    count = 0;
    if (nb == 0)
        count = 1;
    if (nb < 0)
    {
        count = 1;
        nb = nb * -1;
    }
    while (nb)
    {
        nb = nb / 10;
        count++;
    }
    return (count);
}

int format_d(int nbr)
{
    int count;
    long nb;

    nb = nbr;
    count = len_d(nb);
    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * -1;
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    else
    {
        format_d(nb / 10);
        format_d(nb % 10);
    }
    return (count);
}