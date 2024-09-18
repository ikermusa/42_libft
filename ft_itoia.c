/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:08:11 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/18 16:08:20 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_itoia_recursive(int n, char *str, int *index)
{
	if (n < 0)
	{
		str[*index] = '-';
		(*index)++;
		n = -n;
	}
	if (n >= 10)
		ft_itoia_recursive(n / 10, str, index);
	str[*index] = (n % 10) + '0';
	(*index)++;
}

char	*ft_itoia(int n)
{
	char	*str;


}
/*
int	main(void)
{
	int		num = -12345;
	char	*str;

	str = ft_itoa(num);
	if (str)
	{
		printf("Número como cadena: %s\n", str);
		free(str);
	}
	return (0);
}*/