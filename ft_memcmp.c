/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:18:44 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 14:18:53 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
/*
int main() {
    const char str1[] = "Hella, world!";
    const char str2[] = "Hello, world!";
    
    int result = ft_memcmp(str1, str2, sizeof(str1));
    printf("%d",result);
    if (result == 0) {
	printf("Los primeros %lu bytes son iguales.\n", sizeof(str1));
    } else if (result < 0) {
	printf("El primer bloque de memoria es menor que el segundo.\n");
    } else {
	printf("El primer bloque de memoria es mayor que el segundo.\n");
    }

    return 0;
}*/