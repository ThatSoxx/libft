/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:41:00 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 12:08:37 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// 	DESCRIPTION :
// 	The function ft_bzero erases data in the n bytes of memory starting
// 	at location s by writing '\0's.

// 	RETURN VALUE :
// 	None.