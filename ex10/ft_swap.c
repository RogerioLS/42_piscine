/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:11:57 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/16 14:28:17 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/* #include <stdio.h>
int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 7;
	j = 3;
	a = &i;
	b = &j;
	ft_swap(&i, &j);
	printf("i should be 7 and it is: %d\n", i);
	printf("j should be 3 and it is : %d", j);
	//printf("j should be 3 and it is : %u", *b);
	return (0);
}
 */