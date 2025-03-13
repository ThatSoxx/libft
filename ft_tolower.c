/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:38:31 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:40:42 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// 	DESCRIPTION :
// 	The function ft_tolower converts a given uppercase letter c to its
// 	lowercase equivalent.

// 	RETURN VALUE :
// 	The lowercase equivalent letter.
// 	The original character c if c is not an uppercase letter.