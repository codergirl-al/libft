/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:24:01 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/24 14:32:00 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newNode;

	newNode = (t_list *) malloc(sizeof(newNode));
	if (!newNode)
		return (NULL);
	newNode -> content = content;
	newNode -> next = NULL;
	return (newNode);
}