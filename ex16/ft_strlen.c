/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:17:08 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/16 16:22:19 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* #include <stdio.h>
int	main(void)
{
	char	name[] = "Rogerio";

	printf("count variable: %d", ft_strlen(name));
	return (0);
} */
