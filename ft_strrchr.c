/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:36:39 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 17:34:27 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*buffer;

	buffer = NULL;
	index = 0;
	if (c == '\0' && s[0]=='\0')
        return((char *)&s[0]);
	while (s[index])
	{
		if (s[index] == c)
			buffer = (char *)&s[index];
		index++;
	}
	if (buffer == NULL)
		return (NULL);
	else
		return (buffer);
}

// int main(void)
// {
//     char base_str[] = "";
//     char to_find = '\0';
//     printf("strrchr    = %p\n",strrchr(base_str,to_find));
//     printf("ft_strrchr = %p",ft_strrchr(base_str,to_find));
// }