/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:34:26 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/12 15:34:34 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int main() {
    char str1[] = "   -1234";
    char str2[] = "42";
    char str3[] = "   +987";
    char str4[] = "invalid123";

    printf("%d\n", ft_atoi(str1));
    printf("%d\n", ft_atoi(str2));
    printf("%d\n", ft_atoi(str3));
    printf("%d\n", ft_atoi(str4));
    
    return 0;
}*/