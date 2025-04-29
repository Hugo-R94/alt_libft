/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:35:32 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/29 10:17:19 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	if (c == '\0' && s[0] == '\0')
		return ((char *)&s[0]);
	while (s[index])
	{
		if (s[index] == c)
			return ((char *)&s[index]);
		index++;
	}
	if (s[index] == c)
		return ((char *)&s[index]);
	return (NULL);
}

// int main(void)
// {
//     char base_str[] = "";
//     char to_find = '\0';
//     printf("strchr    = %p\n",strchr(base_str,to_find));
//     printf("ft_strchr = %p",ft_strchr(base_str,to_find));
// }