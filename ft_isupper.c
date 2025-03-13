/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:43:24 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:58:47 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int c)
{
	if (c >= 'A' && c < 'Z')
		return (c);
	return (0);
}

// 	DESCRIPTION :
// 	The function ft_isupper checks whether c is a capital Letter or not.

// 	RETURN VALUE :
// 	Non-zero if c is capital, zero if not.