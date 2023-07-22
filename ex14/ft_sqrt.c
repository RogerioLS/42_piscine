/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:07:50 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/16 15:12:50 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(49));
	return (0);
}
 */