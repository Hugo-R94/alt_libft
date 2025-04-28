/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:34:21 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 17:33:42 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_iswhite(char c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	index;
	int	signe;
	int	result;

	index = 0;
	signe = 1;
	result = 0;
	while (ft_iswhite(nptr[index]))
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			signe = -1;
		index++;
	}
	if (!(nptr[index] >= '0' && nptr[index] <= '9'))
		return (0);
	while (nptr[index] >= '0' && nptr[index] <= '9')
		result = result * 10 + (nptr[index++] - '0');
	return (signe * result);
}

// int main(int argc,const char **argv)
// {
//     char *stringnb = "\n\n\n  -46\b9 \n5d6 \n";
//     printf("atoi    = %d\n",atoi(stringnb));
//     printf("ft_atoi = %d",ft_atoi(stringnb));

// }