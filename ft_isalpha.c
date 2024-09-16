/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:04:40 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 12:28:24 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
int main()
{
    char c1 = 'A';
    char c2 = 'z';
    char c3 = '1';

    printf("%c: %d\n", c1, ft_isalpha(c1));
    printf("%c: %d\n", c2, ft_isalpha(c2));
    printf("%c: %d\n", c3, ft_isalpha(c3));

    return 0;
}*/
