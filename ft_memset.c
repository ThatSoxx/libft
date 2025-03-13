/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:04:41 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:47:56 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (n > 0)
	{
		*(tmp++) = (unsigned char) c;
		n--;
	}
	return (b);
}

// 	DESCRIPTION :
// 	The function ft_memset fills the first len bytes of the memory area
// 	pointed	to by b with the byte c. Both b and c are interpreted as 
// 	unsigned char.

// 	RETURN VALUE :
// 	A pointer to memory area s.