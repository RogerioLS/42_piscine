/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:59:36 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/22 18:43:36 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;
	int	*d;

	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	d = ((buffer = malloc(range * sizeof(int))));
	if (!d)
	{
		return (0);
	}
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}

/* #include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 100;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
} */
