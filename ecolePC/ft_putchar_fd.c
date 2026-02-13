/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:00:49 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 00:12:23 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (!c)
		return ;
	write (fd, &c, 1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int	a;

	a = open("deneme.txt", O_RDWR | O_CREAT, 0777);
	ft_putchar_fd('X', a);
	close(a);
}*/
