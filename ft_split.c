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

static char	*ft_strcdup(const char *s, const char c)
{
	char	*dup;
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen(s);
	dup = malloc(n + 1);
	if (dup == NULL)
		return (NULL);
	while ((i < n) && (s[i] != c))
	{
		dup[i] = s[i];
		i ++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	**ft_memory(char const *s, char c)
{
	char	**split;
	int		con;
	int		i;

	con = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			con++;
			i++;
		}
	}
	con++;
	split = (char **)malloc((con + 1) * sizeof(char *));
	if (split == NULL)
	{
		free(split);
		return (NULL);
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		con;
	int		i;
	int		inicio;

	i = 0;
	inicio = 0;
	con = 0;
	if (s == NULL)
		return (NULL);
	split = ft_memory(s, c);
	if (!split)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			inicio = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			split[con++] = ft_strcdup(&s[inicio], c);
		i++;
	}
	split[con] = NULL;
	return (split);
}

/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hola mundo esto es una prueba", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("Palabra %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/