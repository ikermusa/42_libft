/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:54:51 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/16 11:55:00 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	copy = (char *)malloc((i + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int main() {
    const char *str = "Hola, mundo!";
    char *copy;

    // Duplicar la cadena
    copy = ft_strdup(str);

    // Comprobar si la duplicación fue exitosa
    if (copy == NULL) {
        printf("Error al duplicar la cadena.\n");
        return 1;
    }

    // Mostrar la cadena duplicada
    printf("Copia: %s\n", copy);

    // Liberar la memoria asignada
    free(copy);

    return 0;
}*/