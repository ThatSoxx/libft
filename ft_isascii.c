/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:52:05 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 14:24:34 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c > 0 && c <= 127)
		return (c);
	return (0);
}

// 	DESCRIPTION :
// 	The function ft_isascii checks whether c is an ascii character or not.

// 	RESULT VALUE :
// 	Non-zero if c is ascii, zero if not.