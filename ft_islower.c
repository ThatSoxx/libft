/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:41:27 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 12:01:17 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	return (0);
}

// 	DESCRIPTION :
// 	The function ft_isupper checks whether c is a lowercase Letter or not.

// 	RETURN VALUE :
// 	Non-zero if c is lowercase, zero if not.