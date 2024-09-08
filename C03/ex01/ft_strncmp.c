/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzn <yzn@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:45:49 by yasalame          #+#    #+#             */
/*   Updated: 2024/09/08 14:34:05 by yzn              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/* 
int	main(void)
{
	char s1[] = "Hel1o";
	char s2[] = "HelLO world";
	unsigned int n = 4;
	int	result = ft_strncmp(s1, s2, n);

	printf("s1: %s\ns2: %s\nn: %d\nresult: %d\n", s1, s2, n, result);
	return (0);
}
 */