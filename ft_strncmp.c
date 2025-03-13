/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:40:05 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:42:50 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}

// 	DESCRIPTION :
// 	The function ft_strncmp compares the first n bytes of the given strings
// 	s1 and s2.

// 	RETURN VALUE :
// 	An integer less than, equal to, or greater than zero if one of the first
// 	n bytes of s1 is found to be less than, to match, or to be greater than 
// 	s2.