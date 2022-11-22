/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:17 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/22 15:57:25 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_char(int n)
{
	int				i;
	unsigned int	number;

	i = 1;
	number = n;
	if (n < 0)
	{
		i = 2;
		number = -n;
	}
	while (number > 9)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	num;
	char			*buffer;

	buffer = (char *)malloc(num_of_char(n) + 1);
	if (!buffer)
		return (0);
	i = num_of_char(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		buffer[0] = '-';
	}
	buffer[i] = 0;
	buffer[i - 1] = '0';
	while (num > 0)
	{
		i--;
		buffer[i] = num % 10 + 48;
		num /= 10;
	}
	return (buffer);
}
