/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:52 by apeposhi          #+#    #+#             */
/*   Updated: 2022/10/27 08:04:40 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	src_len;

	i = 0;
	if (size == 0 && dst == NULL)
		return (0);
	n = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < n)
		return (src_len + size);
	while (i < size - n)
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[size - 1] = '\0';
	return (src_len + n);
}
