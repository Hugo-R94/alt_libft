/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:14:17 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 17:59:04 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_putnbr_fd(int nb, int fd)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd('-',fd);
		n = nb * -1;
	}
	if (nb >= 0)
		n = nb;
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10),fd);
		ft_putnbr_fd((n % 10),fd);
	}
	else
	ft_putchar_fd((n + '0'),fd);
}

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c,1);
}

// int main()
// {
// 	ft_putnbr_fd(500,2);
// }