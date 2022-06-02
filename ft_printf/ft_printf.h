/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:51:19 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/06/01 20:13:38 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int ft_printf(const char *str, ... );
int ft_putchar(char c);
int format(va_list ptr, char c);
int format_s(char *str);
int format_d(int nbr);
int len_d (long nb );
int format_x(unsigned int hex);
int len_x(unsigned int hex);

#endif