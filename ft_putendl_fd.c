/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:13:05 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/25 15:21:55 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c,1);
}

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index =0;
	while (s[index])
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
	ft_putchar_fd('\n',fd);
}