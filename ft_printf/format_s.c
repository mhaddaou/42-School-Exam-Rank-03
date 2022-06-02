/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:14:21 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/06/01 19:20:14 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format_s(char *str)
{
    int count;
    int i;

    count = 0;
    i = 0;
    if (!str)
        str = "(null)";
    while (str[i])
    {
        count += ft_putchar(str[i]);
        i++;
    }
    return (count);
}