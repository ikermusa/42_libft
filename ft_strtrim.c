/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <imusatad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:40:41 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/16 18:40:41 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
}

int main(void)
{
	char *s1 = "   Hola, mundo!   ";
	char *set = " ";
	char *trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Resultado: '%s'\n", trimmed);
		free(trimmed); // Liberar memoria
	}
	else
	{
		printf("Error en ft_strtrim.\n");
	}
	return (0);
}