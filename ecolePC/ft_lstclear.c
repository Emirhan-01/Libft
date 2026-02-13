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
/*
#include <stdio.h>

int main(void)
{
    char    *a = ft_strdup("Emirhan"); 
    char    *b = ft_strdup("Bostan'dan");
    char    *c = ft_strdup("Dünyaya");
    char    *d = ft_strdup("Selamlar");

    t_list  *master = NULL;
    ft_lstadd_back(&master, ft_lstnew(a));
    ft_lstadd_back(&master, ft_lstnew(b));
    ft_lstadd_back(&master, ft_lstnew(c));
    ft_lstadd_back(&master, ft_lstnew(d));

	t_list	*tmp = master;

	while(tmp)
	{
		printf("%s ", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");

    ft_lstclear(&master, my_del);
    
    if (master == NULL)
        printf("Liste başarıyla temizlendi.\n");
    return (0);
}
*/
