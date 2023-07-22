/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roglopes <roglopes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:25:39 by roglopes          #+#    #+#             */
/*   Updated: 2023/07/19 20:05:50 by roglopes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*new;
	char	*n;
	int		index;

	index = 0;
	n = ((new = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)));
	if (!n)
	{
		return (0);
	}
	while (src[index])
	{
		new[index] = src[index];
		index++;
	}
	new[index] = '\0';
	return (new);
}

/* #include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*new;
	char	*lib;

	if (argc == 2)
	{
		new = ft_strdup(argv[1]);
		lib = strdup(argv[1]);
		printf(":%s:\n:%s:\n", new, lib);
	}
	return (0);
} */
