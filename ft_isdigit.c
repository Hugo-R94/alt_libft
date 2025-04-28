/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:13:07 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 10:25:56 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

int	ft_isdigit(char c)
{
    if (c >= '0'&& c <= '9')
        return (1);
    else   
        return (0);
}

// int main()
// {
//     char char_c = 'e';
//     printf("is char isdigit ? = %d \n", ft_isprint(char_c));
// }