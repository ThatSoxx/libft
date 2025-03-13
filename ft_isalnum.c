/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:00:02 by lgaulke           #+#    #+#             */
/*   Updated: 2025/01/06 13:56:43 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}

// 	DESCRIPTION :
// 	The function ft_isalnum checks whether the value of c is alphanumeric.

// 	RETURN VALUE :
// 	Non-zero if c is alphanumeric, zero if not.