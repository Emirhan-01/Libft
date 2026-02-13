/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:39:24 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 17:44:41 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	word_counter(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static char	**free_all(char **s, size_t i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	st;
	char	**result;

	result = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			st = 0;
			while (s[st] && s[st] != c)
				st++;
			result[i] = ft_substr(s, 0, st);
			if (!result[i])
				return (free_all(result, i));
			i++;
			s += st;
		}
		else
			s++;
	}
	return (result[i] = NULL, result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = " lift   bit     artık  yeter   ";
	char	c = ' ';
	char	**result;
	int		i;

	result = ft_split(s, c);
	if (!result)
		return (1);
	i = 0;
	while (result[i] != NULL)
	{
		printf("Kelime %d: %s\n", i, result[i]);
		i++;
	}
	return (0);
}
*/	
