/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:37:42 by embostan          #+#    #+#             */
/*   Updated: 2026/02/10 18:51:26 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (!(lst->next == NULL))
		lst = lst->next;
	return(lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*frst;
	t_list	*a;
	t_list	*b;
	char	*x = "Emirhan";
	char	*y = " ";
	char	*z = "Bostan";

	frst = ft_lstnew(x);
	a = ft_lstnew(y);
	b = ft_lstnew(z);
	
	frst->next = a;
	a->next = b;

	printf("--->%s<---\n", (char *)ft_lstlast(frst)->content);	
	return (0);
}*/
