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
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(const char *cadena, unsigned int inicio, size_t longitud)
{
	char	*subcadena;
	size_t	cadlen;
	size_t	sub_len;

	sub_len = ft_strlen(cadena);
	if (inicio >= sub_len)
	{
		subcadena = (char *)malloc(sizeof(char) * 1);
		if (!subcadena)
			return (NULL);
		subcadena[0] = '\0';
		return (subcadena);
	}
	if (longitud > sub_len - inicio)
		longitud =  sub_len - inicio;
	subcadena = (char *)malloc((longitud + 1) * sizeof(char));
	if (!subcadena)
		return (NULL);
	while (cadlen < longitud && cadena[inicio + cadlen] != '\0')
	{
		subcadena[cadlen] = cadena[inicio + cadlen];
		cadlen++;
	}
	subcadena[cadlen] = '\0';
	return (subcadena);
}

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
}