/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:47:54 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/16 14:10:57 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* #include <stdio.h>
int	main(void)
{
	int	*p_nbr;
	int	nbr;

	nbr = 1;
	printf("variable before of pointer %d\n", nbr);
	printf("address of variable of pointer %x\n", &nbr);
	p_nbr = &nbr;
	ft_ft(p_nbr);
	printf("variable after of pointer %d\n", nbr);
	printf("variable of pointer p_nbr: %x", p_nbr);

	return (0);
} */
