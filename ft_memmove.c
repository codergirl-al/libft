/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:28 by apeposhi          #+#    #+#             */
/*   Updated: 2022/10/28 17:26:55 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	
	if (d > s)
	{
		i = (int)n - 1;
		while (i >= 0 && dest != NULL)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n && src != NULL)
		{
			d[i] = s[i];
			i++;
		}	
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[100];
// 	for (int i = 0; i < 100; ++i)
// 	{
// 		s1[i] = (char)i % 26 + 'a';
// 	}
// 	printf("%s\n", s1);
// 	ft_memmove(s1, s1 + 99, 1);
// 	printf("%s\n", s1);
// 	for (int i = 0; i < 100; ++i)
// 	{
// 		s1[i] = (char)i % 26 + 'a';
// 	}
// 	memmove(s1, s1 + 99, 1);
// 	printf("%s\n", s1);
// }