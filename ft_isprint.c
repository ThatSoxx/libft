/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:10:36 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 14:20:13 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (c);
	return (0);
}

// 	DESCRIPTION :
// 	The function ft_isprint checks whether c is a printable character or not.

// 	RETURN VALUE :
// 	Non-zero if c is printable, zero if not.