/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:07:29 by embostan          #+#    #+#             */
/*   Updated: 2026/02/16 17:45:08 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*list;
	t_list	*node;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	node = NULL;
	while (lst)
	{
		cont = f(lst->content);
		node = ft_lstnew(cont);
		if (!node)
		{
			del(cont);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}

void *ft_f(void *f)
{
	char *c;
	char *start;
	
	c = ft_strdup((char *)f);
	start = c;
	if(!c)
		return (NULL);
	
	while (*c)
	{
		if (*c == 'e')
			*c = '0';
		c++;
	}
	return (start);
}

void	ft_del(void *del)
{
	free(del);
}
#include <stdio.h>

int	main(void)
{
	t_list *master = NULL;
	t_list *n1, *n2, *n3;
	
	n1 = ft_lstnew(ft_strdup("Ayse"));
	ft_lstadd_back(&master, n1);
	n2 = ft_lstnew(ft_strdup("Tatile"));
	ft_lstadd_back(&master, n2);
	n3 = ft_lstnew(ft_strdup("Cıksın"));
	ft_lstadd_back(&master, n3);
	
	t_list *tmp = master;
	while (tmp)
	{
		printf("--->%s <---", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}