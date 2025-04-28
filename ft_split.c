/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:06:20 by hrouchy           #+#    #+#             */
/*   Updated: 2025/04/28 10:35:27 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *str, char sep)
{
	int	index;
	int	count;

	count = 0;
	index = 0;
	while (str[index] == sep)
		index++;
	if (str[index] == '\0')
		return (0);
	while (str[index])
	{
		if (str[index] != sep && str[index] != '\0')
		{
			count++;
			while (str[index] != sep && str[index] != '\0')
				index++;
		}
		else
			while (str[index] == sep && str[index] != '\0')
				index++;
	}
	return (count);
}

void	ft_splitcpy(char *str, int index, char sep, char **str_arr)
{
	int	size;
	int	index2;

	while (*str)
	{	
		size = 0;
		index2 = 0;
		if (*str == sep)
			while (*str == sep)
				str++;
		else
		{
			while (str[size] != sep && str[size])
				size++;
			str_arr[index] = (char *) malloc((size + 1) * sizeof(char));
			while (*str != sep && *str)
			{
				str_arr[index][index2++] = str[0];
				str++;
			}
			str_arr[index++][index2] = '\0';
		}
	}
	str_arr[index] = NULL;
}

char	**ft_split(char *str, char c)
{
	char	**split_array;
	int		index;

	index = 0;
	split_array = malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	if (!split_array)
		return (NULL);
	ft_splitcpy(str, index, c, split_array);
	return (split_array);
}

// int	main(void)
// {
// 	char **splitresult;
// 	char 	*tosplit = "                             ";
// 	char	sep = ' ';
// 	int index = 0;
// 	printf("count words = %i\n",ft_count_words(tosplit,sep));
// 	splitresult = ft_split(tosplit,sep);
// 	while (splitresult[index] != NULL)
// 	{
// 		printf("%s\n",splitresult[index]);
// 		index++;
// 	}
	
// }