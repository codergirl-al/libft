/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:50:09 by apeposhi          #+#    #+#             */
/*   Updated: 2022/10/27 15:09:25 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*ptr;
	unsigned char	f;

	ptr = (char *)s;
	i = 0;
	f = (unsigned char) c;
	while (s[i] != '\0')
		i++;
	if (f == 0 || f == '\0')
		return (&(ptr[i]));
	while (i >= 0)
	{
		if (s[i] == f)
			return (&(ptr[i]));
		i--;
	}
	return (0);
}
