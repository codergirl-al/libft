/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:44:59 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/25 17:32:19 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	len;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len)
	{
		if (i < ft_strlen(s1))
			res[i] = s1[i];
		else
		{
			res[i] = s2[j];
			j++;
		}
		i++;
	}
	return (res);
}
