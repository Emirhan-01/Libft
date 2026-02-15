/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:36:59 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 17:38:19 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*box;

	while ((*lst) != NULL)
	{
		del((*lst)->content);
		box = (*lst)->next;
		free(*lst);
		*lst = box;
	}
	*lst = NULL;
}
