/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:00:42 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/10 13:10:36 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c <= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main() {
    char c1 = 'A';
    char c2 = '7';
    char c3 = '@';

    printf("%c: %d\n", c1, ft_isalnum(c1));
    printf("%c: %d\n", c2, ft_isalnum(c2));
    printf("%c: %d\n", c3, ft_isalnum(c3));
    
    return 0;
}*/
