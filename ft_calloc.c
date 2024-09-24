/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:50:08 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 15:55:32 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	total_size;

	total_size = count * size;
	ptr = (char *)malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
int main() {
	int *arr;
	size_t count = 5;

	// Asignar memoria para 5 enteros
	arr = (int *)ft_calloc(count, sizeof(int));

	// Comprobar si la asignación de memoria fue exitosa
	if (arr == NULL) {
		printf("Error al asignar memoria.\n");
		return 1;
	}

	// Mostrar los valores iniciales (todos deben ser 0)
	for (size_t i = 0; i < count; i++) {
		printf("arr[%zu] = %d\n", i, arr[i]);
	}

	// Liberar la memoria asignada
	free(arr);

	return 0;
}*/