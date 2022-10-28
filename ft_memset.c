/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:32 by apeposhi          #+#    #+#             */
/*   Updated: 2022/10/17 13:57:07 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*thestring;

	thestring = str;
	i = 0;
	while (i < n)
	{
		thestring[i] = c;
		i++;
	}
	return (str);
}
