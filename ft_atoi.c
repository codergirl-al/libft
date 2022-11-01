/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:28:46 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/01 14:47:25 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	val;
	int	i;
	int	isneg;

	i = 0;
	isneg = 0;
	val = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || \
			*str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		isneg = 1;
	if (*str == '-' || *str == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		val = (str[i] - 48) + (10 * val);
		i++;
	}
	if (isneg == 1)
		val = val * -1;
	return (val);
}
