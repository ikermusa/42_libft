/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:47:32 by imusatad          #+#    #+#             */
/*   Updated: 2024/10/02 11:47:51 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *str = "Hello World";
	char ch = 'o';
	char *result;

	result = ft_strrchr(str, ch);
	if (result)
		printf("Última ocurrencia de '%c': %s\n", ch, result);
	else
		printf("Carácter '%c' no encontrado.\n", ch);

	return (0);
}*/