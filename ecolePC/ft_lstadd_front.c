/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:03:50 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 17:21:42 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*start = NULL;

	char	*a = ft_strdup("Merhaba");
	char	*b = ft_strdup("Dünya");
	char	*c = ft_strdup("!!!");

	ft_lstadd_front(&start, ft_lstnew(c));
	ft_lstadd_front(&start, ft_lstnew(b));
	ft_lstadd_front(&start, ft_lstnew(a));

	t_list	*tmp = start;

	while(tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	return (0);
}*/
