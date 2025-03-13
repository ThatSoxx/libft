/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:37:59 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:41:05 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// 	DESCRIPTION :
// 	The function ft_toupper converts a given lowercase letter c to its
// 	uppercase equivalent.

// 	RETURN VALUE :
// 	The uppercase equivalent letter.
// 	The original character c if c is not a lowercase letter.