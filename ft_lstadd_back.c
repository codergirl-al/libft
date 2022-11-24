/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:16:29 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/24 17:42:54 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lista;

	if (lst)
	{
		if (*lst)
		{
			lista = ft_lstlast(*lst);
			lista -> next = new;
		}
		else
			*lst = new;
	}
}
