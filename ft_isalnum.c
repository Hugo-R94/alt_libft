/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:34:39 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 10:34:40 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
    if ((c >= 'a' && c <= 'z')|| (c >= 'A'&& c <= 'Z')||(c >= '0'&& c <= '9'))
        return (1);
    else   
        return (0);
}

// int main()
// {
//     char char_c = ' ';
//     printf("is char alphanum ? = %d \n", ft_isalnum(char_c));
// }