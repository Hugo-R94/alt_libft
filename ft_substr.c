/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:37:07 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/29 16:12:54 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// int	ft_strlen(const char *s)
// {
// 	int	index;

// 	index = 0;
// 	while (s[index])
// 		index++;
// 	return (index);
// }

char	*ft_substr(char const *s, int start, size_t len)
{
	size_t	i = 0;
	size_t	s_len;
	char	*str;

	if (!s)
		return (NULL);
	if (len == 0)
		return("");
	s_len = ft_strlen(s);

	if (start < 0)
		start = s_len + start;
	if (start >= (int)s_len)
		return ("");
	if ((size_t)start + len > s_len)
		len = s_len - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

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
//
//
// int	main(void)
// {
// 	char const	*s = "lorem ipsum dolor sit amet";
// 	unsigned int	start = 7;
// 	size_t	len = 10;
//
// 	printf("start index: %d\nsubstring length: %zu\n", start, len );
// 	printf("string: %s\nft_substr: %s\n", s, ft_substr(s, start, len));
// }

// int main()
// {
// 	printf("%s",ft_substr("hello", 2, 10));
// }