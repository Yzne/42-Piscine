/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsabri <tsabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:02:44 by tsabri            #+#    #+#             */
/*   Updated: 2024/09/07 13:33:01 by tsabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif