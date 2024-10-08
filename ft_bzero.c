/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:38:45 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 16:45:21 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main() {
    char buffer[10] = "Hola";

    printf("Antes de ft_bzero: %s\n", buffer);

    ft_bzero(buffer, sizeof(buffer));

    printf("Después de ft_bzero: %s\n", buffer);

    return 0;
}
*/