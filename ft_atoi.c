/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:28:46 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/24 11:06:23 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	val;
	int				i;
	int				isneg;

	i = 0;
	isneg = 1;
	val = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || \
			*str == '\r' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (str[i] - '0') + (10 * val);
		i++;
		if ((isneg * val) > 4294967295)
			return (-1);
		if ((isneg * val) < -4294967295)
			return (0);
	}
	if (*str == '-')
		val = val * -1;
	return (val);
}
