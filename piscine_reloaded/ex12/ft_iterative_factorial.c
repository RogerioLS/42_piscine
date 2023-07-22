/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:42:30 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/16 14:59:50 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
} */
