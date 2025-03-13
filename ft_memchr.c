/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:41:03 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:51:29 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[i]);
		i++;
	}
	return (0);
}

// 	DESCRIPTION :
// 	The function ft_memchr searches n bytes of the memory area pointed to
// 	by s for the first occurence of c. Both c and the bytes of s are
// 	interpreted as unsigned char.

// 	RETURN VALUE:
// 	A pointer to the matching byte. NULL if the character does not occur
// 	in the given memory area.