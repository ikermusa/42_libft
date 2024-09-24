/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:46:43 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 17:10:32 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
int main() 
{
    char src[50] = "Esta es una cadena de ejemplo.";
    char dest[50];

    ft_memcpy(dest, src, sizeof(src));

    printf("Contenido de dest: %s\n", dest);

    return 0;
}*/
