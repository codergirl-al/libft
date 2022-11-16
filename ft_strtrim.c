/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:46:28 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/16 13:50:41 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	is_in_set(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < ft_strlen(s1))
	{
		while (j < ft_strlen(set))
		{
			j = 0;
			if (s1[i] == set[j])
				return(i);
			j++;
		}
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*trimmed;

	trimmed = malloc(sizeof(char) * ft_strlen(s1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		while ()
		if (s1[i] ==)
	}
	// trimmed[] = '\0';
	return (trimmed);
}
