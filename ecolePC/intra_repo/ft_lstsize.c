/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirhan <emirhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:47:06 by embostan          #+#    #+#             */
/*   Updated: 2026/02/10 12:29:10 by emirhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

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

	printf("---> %d <---\n", ft_lstsize(frst));	
	return (0);
}
