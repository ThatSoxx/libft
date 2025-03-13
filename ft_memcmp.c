/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:41:24 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:51:12 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}

// 	DESCRIPTION :
// 	The function ft_memcmp compares the first n bytes of the memory areas
// 	s1 and s2. The bytes are interpreted as unsigned char.

// 	RETURN VALUE :
// 	An integer less than, equal to, or greater than zero if the first
// 	n bytes of s1 is found to be less than, equal to, or greater than the 
// 	first n bytes of s2. Zero if n is equal to zero.