/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:37:07 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 17:47:12 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int		ft_strlen(const char *s)
{
    int index;
    index = 0;
    while (s[index])
        index++;
    return(index);
}

char	*ft_substr(char const *s, int start, size_t len)
{
	int index2;
	char	*str;

	index2 = 0;
	if (start >= ft_strlen(s) || len == 0)
		{
			str = malloc(1);
			str[0] = '\0';
			return(str);
		}
	if(len < 0 )
	 	return(NULL);
	if (start < 0)
		start = ft_strlen(s) + start;

	str = (char *)malloc(len);
	if (!str)
		return(NULL);
	while ((size_t)index2 < len)
		str[index2++] = s[start++];
	str[index2] = '\0';
	return (str);		
}


// int	main(void)
// {
// 	test_substr("Hello World", 0, 5);          // "Hello"
// 	test_substr("Hello World", 6, 5);          // "80World"
// 	test_substr("Hello World", 6, 50);         // "World" (limite > fin)
// 	test_substr("Hello World", 11, 5);         // "" (start == len de la chaîne)
// 	test_substr("Hello World", 15, 3);         // "" (start > len de la chaîne)
// 	test_substr("", 0, 5);                     // "" (chaîne vide)
// 	test_substr("Hello", 0, 0);                // "" (longueur 0)

// 	return 0;
// }

// int main()
// {
// 	int start = 7;
// 	size_t len = 10;
// 	char *str = "lorem ipsum dolor sit amet";
// 	char *strsub = ft_substr(str,start,len);
// 	if (!(strsub = ft_substr(str, start, len)))
// 		printf("NULL");
// 	else
// 		printf("%s",strsub);
// 	if (str == strsub)
// 		printf("\nA new string was not returned");
// }