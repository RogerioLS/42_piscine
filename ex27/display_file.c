/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:37:35 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/22 17:45:25 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	ft_put_error(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
		;
	write(2, str, i);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	*buf;

	if (argc == 1)
		return (ft_put_error("File name missing.\n"));
	if (argc > 2)
		return (ft_put_error("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}
