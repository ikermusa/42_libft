/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:08:42 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/16 12:08:50 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subcadena;
	size_t	cadlen;
	size_t	sub_len;

	sub_len = ft_strlen(s);
	if (start >= sub_len)
	{
		subcadena = (char *)malloc(sizeof(char) * 1);
		if (!subcadena)
			return (NULL);
		subcadena[0] = '\0';
		return (subcadena);
	}
	if (len > sub_len - start)
		len = sub_len - start;
	subcadena = (char *)malloc((len + 1) * sizeof(char));
	if (!subcadena)
		return (NULL);
	while (cadlen < len && s[start + cadlen] != '\0')
	{
		subcadena[cadlen] = s[start + cadlen];
		cadlen++;
	}
	subcadena[cadlen] = '\0';
	return (subcadena);
}
/*
int main() {
    const char *str = "Hola, mundo!";
    char *sub;

    // Extraer la subcadena comenzando en la posición 7 con longitud 5
    sub = ft_substr(str, 7, 5);

    // Comprobar si la extracción fue exitosa
    if (sub == NULL) {
        printf("Error al extraer la subcadena.\n");
        return 1;
    }

    // Mostrar la subcadena extraída
    printf("Subcadena: %s\n", sub);

    // Liberar la memoria asignada
    free(sub);

    return 0;
}*/