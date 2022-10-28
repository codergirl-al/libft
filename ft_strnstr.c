/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:50:06 by apeposhi          #+#    #+#             */
/*   Updated: 2022/10/28 13:23:31 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check(const char *c1, const char *c2)
{
	if (c1 == c2)
		
}

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*curr;
	char	*next;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(needle);
	if (!needle)
		return ((char *)haystack);
	while (i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (j < ft_strlen(needle))
			{
				i++;
				j++;
				if (haystack[i] == needle[j])
				{
					
				}
			}
		}
	}
	return (0);
}