/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imusatad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:45:10 by imusatad          #+#    #+#             */
/*   Updated: 2024/09/23 16:45:23 by imusatad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int fd = open("numbers.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd < 0)
		return (1);
	
	ft_putnbr_fd(12345, fd);
	ft_putnbr_fd(-98765, fd);
	ft_putnbr_fd(0, fd);

	close(fd);
	
	return (0);
}*/