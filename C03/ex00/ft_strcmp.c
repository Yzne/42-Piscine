/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasalame <yasalame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:03:57 by yasalame          #+#    #+#             */
/*   Updated: 2024/09/05 10:04:41 by yasalame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/* 
int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "hello world";

	ft_strcmp(s1, s2);
	printf("Difference: %d\n", ft_strcmp(s1, s2));
	return (0);
}
 */