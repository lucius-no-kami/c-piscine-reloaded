/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucius <lucius@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:19:21 by lucius            #+#    #+#             */
/*   Updated: 2024/11/07 15:06:06 by lucius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_file(char *filename)
{
	char	c;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	print_file(av[1]);
	return (0);
}
