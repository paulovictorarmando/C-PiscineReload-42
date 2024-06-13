/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 07:38:10 by parmando          #+#    #+#             */
/*   Updated: 2024/05/16 08:40:05 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096

int	ft_display_file(char *arg)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(arg, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	write(1, buf, ret);
	if (close(fd) == -1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	returned;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc >= 3)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 2)
		returned = ft_display_file(argv[1]);
	return (returned);
}
