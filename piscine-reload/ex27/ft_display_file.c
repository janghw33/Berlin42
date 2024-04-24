/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:05:41 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 21:52:55 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-24 21:05
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 10

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		errors(int ac)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

char	recupbuf(char **av)
{
	int fd;
	int ret;
	char buf [BUF_SIZE + 1];

	fd = open(av[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (errors(ac) == 0)
		return (0);
	recupbuf(av);
	return (0);
}
