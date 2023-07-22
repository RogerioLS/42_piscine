/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:07:58 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/16 17:23:36 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	name_aux(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		sum;
	char	*aux;

	sum = argc - 1;
	i = 1;
	while (i <= sum && argc > 1)
	{
		j = 1;
		while (j < sum)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				aux = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
	name_aux(argc, argv);
	return (0);
}
