/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:56:07 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/23 13:52:22 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tlst;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tlst = *lst;
		*lst = tlst -> next;
		ft_lstdelone(tlst, del);
	}
}
