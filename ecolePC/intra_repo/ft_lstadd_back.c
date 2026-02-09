/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:55:16 by embostan          #+#    #+#             */
/*   Updated: 2026/02/09 22:37:14 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return;
	if(*lst == NULL)
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
#include <stdio.h>

int	main(void)
{
	t_list	*start = NULL;

	char	*a = "Merhaba";
	char	*b = "Dünya";
	char	*c = "!!!";

	ft_lstadd_back(&start, ft_lstnew(a));
	ft_lstadd_back(&start, ft_lstnew(b));
	ft_lstadd_back(&start, ft_lstnew(c));

	t_list	*tmp = start;

	while(tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
	return (0);
}
