/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>          +#+  +:+       +#+        */
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
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, &s1[start], end - start + 1);
	return (trimmed_str);
}
/*
int main(void)
{
	char *s1 = "   Hola, mundo!   ";
	char *set = " Ho";
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
}*/