/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:41:04 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/22 17:36:03 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/* #include <stdio.h>
void	print_number(int num)
{
	printf("%d\n", num);
}

int	main(void)
{
	int	array [] = {1, 2, 3, 4};
	ft_foreach(array, 4, print_number);
	return (0);
} */
