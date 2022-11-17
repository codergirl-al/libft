/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 03:43:56 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/17 12:47:53 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**arr[ft_strlen(s)];

	i = 0;
	k = 0;
	while (i < ft_strlen(s))
	{
		if (ft_strchr(s, i))
			i++;
		else
		{
			j = i;
			while (j < ft_strlen(s))
			{
				if (s[j] == c)
				{
					(char *)(arr + k) = ft_substr(s, i, j - i + 1);
					k++;
				}
				j++;
			}
		}
		i++;
	}
	return arr;
}