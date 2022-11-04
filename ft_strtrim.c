/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:46:28 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/04 15:21:58 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trimmed;

	trimmed = malloc(sizeof(char) * ft_strlen(s1));
	if (!trimmed)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ft_strlen(set))
	{
		j = 0;
		while (j < ft_strlen(s1))
		{
			if (s1[j] == set[i])
				j++;
			else
			{
				trimmed[k] = s1[j];	
				k++;
			}
		}
		i++;
	}
	trimmed[k] = 0;
	return (trimmed);
} 