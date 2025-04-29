/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:34:13 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/29 10:28:15 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int size)
{
	int				index;
	unsigned char	*source;
	unsigned char	*destination;

	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (destination > source && destination < source + size)
	{
		index = size;
		while (index-- > 0)
			destination[index] = source[index];
	}
	else
	{
		index = 0;
		while (index < size)
		{
			destination[index] = source[index];
			index++;
		}
	}
	return (destination);
}
