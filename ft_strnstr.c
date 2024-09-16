/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:51:56 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 14:52:06 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t lon)
{
	size_t	i;
	size_t	little_lon;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	little_lon = 0;
	while (little[little_lon] != '\0')
		little_lon++;
	if (little_lon > lon)
		return (NULL);
	i = 0;
	while (i <= lon - little_lon)
	{
		j = 0;
		while (big[i + j] == little[j] && j < little_lon)
			j++;
		if (j == little_lon)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char *haystack = "Hola, mundo!";
    const char *needle = "mundo";
    
    char *result = ft_strnstr(haystack, needle, 12);
    
    if (result != NULL) {
	printf("Subcadena encontrada: %s\n", result);
    } else {
	printf("Subcadena no encontrada.\n");
    }

    return 0;
}*/