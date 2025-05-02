/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguardam <gguardam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:58:14 by gguardam          #+#    #+#             */
/*   Updated: 2025/04/30 15:40:53 by gguardam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

void *calloc(size_t nmemb, size_t size)
{
    void *ptr;
    unsigned char *byte_ptr;
    size_t total_size;
    size_t i;
    
    if (size > 0 && nmemb > SIZE_MAX / size)
        return NULL;
    total_size = nmemb * size;
    ptr = malloc(total_size);
    if (ptr == NULL)
        return NULL;
    byte_ptr = (unsigned char *)ptr;
    i = 0;
    while (i < total_size)
    {
        byte_ptr[i] = 0;
        i++;
    }
    return (ptr);
}
