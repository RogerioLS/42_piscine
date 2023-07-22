/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:49:53 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/22 16:34:48 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (tab[i][0] != '0')
	{
		if (f(tab[i]) == 1)
		{
			nb++;
		}
		i++;
	}
	return (nb);
}

/* void	print_number(char num)
{
	printf("%s\n", num);
}

#include <stdio.h>
int	main(void)
{
	int	array [] = {'1', '2', '3', '4'};
	ft_count_if(array, print_number);
	return (0);
} */
