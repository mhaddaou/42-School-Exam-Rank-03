/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:48:57 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/06/01 20:07:16 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int len_x(unsigned int hex)
{
    int count;
    
    count = 0;
    if (hex == 0)
        count = 1;
    while (hex)
    {
        hex = hex / 16;
        count++;
    }
    return (count);
}

int format_x(unsigned int hex)
{
    int count;
    
    count = len_x(hex);
    if (hex >= 16)
    {
        format_x(hex / 16);
        format_x(hex % 16);
    }
    else
    {
        if (hex < 10)
            ft_putchar(hex + 48);
        else
            ft_putchar(hex + 87);
    }
    return (count);
}