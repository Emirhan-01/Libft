/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 22:47:23 by embostan          #+#    #+#             */
/*   Updated: 2026/02/09 23:21:38 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	ft_del(void *content)
{
		free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	ft_del(lst->next);
	free(lst);
}

