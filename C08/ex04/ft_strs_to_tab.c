/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:38:29 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/07 13:46:45 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char			*s;
	unsigned int	len;
	unsigned int	i;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	s = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int						i;
	struct s_stock_str		*strs;

	i = 0;
	strs = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!strs)
		return (0);
	while (i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(av[i]);
		if (!strs[i].copy)
		{
			while (i-- > 0)
				free(strs[i].copy);
			free(strs);
			return (NULL);
		}
		i++;
	}
	strs[i].str = 0;
	strs[i].copy = 0;
	return (strs);
}
