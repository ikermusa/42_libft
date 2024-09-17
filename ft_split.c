/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <imusatad@marvin.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:13:12 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/17 10:13:12 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función auxiliar para contar cuántas palabras hay en la cadena s
static int	ft_count_words(char const *s, char c)
{
	int	count;
	int in_word;

	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if(*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

// Función auxiliar para copiar una palabra desde s
static char	*ft_word_dup(const char *s, size_t start, size_t finish)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	start;
	size_t	j;
}

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hola, esto es una prueba", ' ');
	if (result)
	{
		i = 0;
		while (result[i])
		{
			printf("Palabra %d: %s\n", i, result[i]);
			free(result[i]); // Liberar cada palabra
			i++;
		}
		free(result); // Liberar el array de punteros
	}
	return (0);
}