/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:30:39 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/16 14:41:15 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* #include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 10;
	ft_div_mod(a, b, &a, &b);
	printf("Value of a is: %d", a);
	printf("\nValue of b is: %d", b);
	return (0);
} */
