/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:44:59 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/04 14:21:15 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*joined;

	i = ft_strlen(s1);
	j = 0;
	joined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!joined)
		return (NULL);
	while (j < ft_strlen(s1))
	{
		joined[j] = s1[j];
		j++;
	}
	j = 0;
	while (j < (ft_strlen(s1) + ft_strlen(s2)))
	{
		if (s2[j])
			joined[i] = s2[j];
		i++;
		j++;
	}
	joined[j] = 0;
	return (joined);
}
