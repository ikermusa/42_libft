/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:42:39 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/19 17:42:49 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	f(unsigned int i, char c)
{
	return (c + i);
}
/*
int	main(void)
{
	char	*str = "Hello, World!";
	char	*result = ft_strmapi(str, f);

	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/