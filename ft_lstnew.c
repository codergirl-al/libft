/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:24:01 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/24 15:07:02 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
