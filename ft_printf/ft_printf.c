/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:52:46 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/06/01 20:13:22 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format(va_list ptr, char c)
{
    int count;

    count = 0;
    if (c == 's')
        count += format_s(va_arg(ptr, char *));
    if (c == 'd')
        count += format_d(va_arg(ptr, int));
    if (c == 'x')
        count += format_x(va_arg(ptr, unsigned int));

    return (count);
    
}

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int ft_printf(const char *str, ... )
{
    int count;
    int i;
    va_list p_ptr;

    count = 0;
    i = 0;
    va_start(p_ptr, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            count += format(p_ptr, str[i + 1]);
            i++;
        }
        else
            count += ft_putchar(str[i]);
        i++;
    }
    return (count);
}