/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:34:26 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 16:37:43 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}
/*
int main() {
    char buffer[20];

    // Llenar el buffer con el carácter 'A'
    ft_memset(buffer, 'A', sizeof(buffer) - 1);

    // Asegurarse de que el buffer sea una cadena terminada en null
    buffer[sizeof(buffer) - 1] = '\0';

    printf("Contenido del buffer: %s\n", buffer);

    return 0;
}*/
