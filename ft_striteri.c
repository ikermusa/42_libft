/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:33:13 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/23 10:33:13 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return (NULL);

	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	*f(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

/*
int main(void)
{
	char str[] = "Hello, World!";
	void (*f)(unsigned int, char*) = (void (*)(unsigned int, char*))0x
	
}*/