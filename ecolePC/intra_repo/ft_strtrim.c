/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:48:36 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 00:19:19 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	last = ft_strlen(s1);
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	res = ft_substr(s1, first, last - first);
	if (res == NULL)
		return (NULL);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "Emirhan Bostan";
	char	f[] = "Eman";
	char	*islem;

	printf("---> %s\n---> %s\n---", s, f);
	islem = ft_strtrim(s, f);
	printf("---> %s\n", islem);
	free(islem);
	return (0);
}
*/