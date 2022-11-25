/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:52 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/25 16:50:33 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < dstsize)
		dst[dst_len + i] = '\0';
	if (dst_len > dstsize)
		return (src_len + dstsize);
	return (src_len + dst_len);
}
