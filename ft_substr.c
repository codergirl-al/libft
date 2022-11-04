/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:40:24 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/03 15:44:12 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*subs;

	if (!s || !len || (s + len) > ft_strlen(s))
		return (NULL);
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	i = (size_t)start;
	j = 0;
	while (j < len && i < ft_strlen(s))
	{
		subs[j] = s[i];
		i++;
		j++;	
	}
	subs[j] = '\0';
	return (subs);
}
