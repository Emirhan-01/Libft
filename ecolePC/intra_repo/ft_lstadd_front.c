/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:03:50 by embostan          #+#    #+#             */
/*   Updated: 2026/02/05 19:52:18 by embostan         ###   ########.fr       */
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

#include <stdio.h>

int	main(void)
{
	t_list	*master = NULL;
	t_list	*slave1;
	t_list	*slave2;

	slave1 = ft_lstnew("Merhaba");
	ft_lstadd_front(&master, slave1);

	slave2 = ft_lstnew("Dunya");
	ft_lstadd_front(&master, slave2);

	t_list	*temp = master;
	while (temp != NULL)
	{
		printf("Düriyenin güğümleri ---> %s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}
