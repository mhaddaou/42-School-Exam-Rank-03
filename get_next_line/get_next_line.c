/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:39:05 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/06/01 18:50:07 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *buffer;
    char    c;
    int     i;
    size_t  size;
    
    if (fd == -1 || BUFFER_SIZE < 0)
        return (NULL);
    buffer = (char *) malloc (sizeof(char) * 9999);
    if (!buffer)
        return (NULL);
    c = 0;
    i = 0;
    size = 1;
    while (!!size && c != '\n')
    {
        size = read (fd, &c, 1);
        if (size == -1)
        {
            free(buffer);
            return (NULL);
        }
        if (!!size)
            buffer[i++] = c;
        buffer[i] = 0;
    }
    if (!*buffer || !buffer)
    {
        free(buffer);
        return (NULL);
    }
    return (buffer);
}
