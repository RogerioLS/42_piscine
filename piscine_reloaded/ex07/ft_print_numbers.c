/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:24:24 by roglopes          #+#    #+#             */
/*   Updated: 2023/08/20 18:51:05 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = '1';
	while (numbers <= '9')
	{
		ft_putchar(numbers);
		numbers++;
	}
}


/* int	main(void)
{
	ft_print_numbers();
	return (0);
} */
