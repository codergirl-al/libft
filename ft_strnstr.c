/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:50:06 by apeposhi          #+#    #+#             */
/*   Updated: 2022/10/28 17:10:42 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (j < ft_strlen(needle) && haystack[i] == needle[j] && i < len)
			{
				i++;
				j++;
			}
			if (j == ft_strlen(needle))
				return ((char *)(haystack + k));
			i = k;
		}
		i++;
	}
	return (NULL);
}
