/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:13:44 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/28 10:15:08 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (!dst && !src)
		return (0);
	if (n == 0 || (dst == src))
		return (dst);
	dp = (char *)dst;
	sp = (const char *)src;
	while (n != 0)
	{
		if (*dp != *sp)
			*dp = *sp;
		dp++;
		sp++;
		n--;
	}
	return (dst);
}

// ((unsigned char *)dest)[num] accesses the num-th byte of the destination.
// ((unsigned char *)src)[num] accesses the num-th byte of the source.
// The value from the source byte is copied to the destination byte.
// while (num--) means the loop will run as long as num is greater than 0.
// After each iteration, num is decremented by 1.
// 	DESCRIPTION :
// 	The function ft_memcpy copies n bytes from memory area src to memory
// 	area dst.

// 	RETURN VALUE :
// 	A pointer to dst. NULL if src and dst are both NULL.