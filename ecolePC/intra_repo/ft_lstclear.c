/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:36:59 by embostan          #+#    #+#             */
/*   Updated: 2026/02/10 15:51:03 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdalign.h>
#include "libft.h"

void	ft_del(void *content)
{
		free(content);
}
void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *box;

    while ((*lst) != NULL)
    {
        ft_del((*lst)->content);
        box = (*lst)->next;
        free(*lst);
        *lst = box;
    }
    *lst = NULL;//lst nin içinde içi boş olan bir adres kalır ve biz bu işlemle lst deki boş adresi sileriz
}

int main(void)
{
    
}