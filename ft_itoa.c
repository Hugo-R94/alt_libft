/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:32:56 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 10:32:57 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int nb_digits(int n)
{
    int digits;
	long int nb;

	nb = n;
    digits = 1;
    if (n < 0)
    {
        digits++;
        nb = -nb;
    }
	else
		nb  = n;	
    while (nb >= 10)
    {
        
        nb = nb /10;
		digits++;
	}
    return(digits);
}

char	*ft_itoa(int n)
{
	int		len = nb_digits(n);
	char	*str = malloc(len + 1);
	long	nb = n;
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int i = 0;
// 	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

// 	while (i < 5)
// 		printf("%s\n", ft_itoa(tab[i++]));

// 	return 0;
// }