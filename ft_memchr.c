/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:28:07 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 12:28:18 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
int main() {
	const char str[] = "iker musatadi";
	char *result = ft_memchr(str, 'g', sizeof(str));
	
	if (result != NULL) {
		printf("Se encontró el carácter 'g' en: %s\n", result);
	} else {
		printf("No se encontró el carácter 'g'.\n");
	}

	return 0;
}*/