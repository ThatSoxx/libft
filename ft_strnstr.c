/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:42:37 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:42:06 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	if (len == 0)
		return (0);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}

// 	DESCRIPTION :
// 	The function ft_strnstr searches the first n bytes of the given string
// 	s1 for the first occurence of the full string s2.
// 	Characters that appear after \0 are not searched.

// 	RETURN VALUE :
// 	A pointer to the first character of the first occurrence of s2.
// 	A pointer to s1 if s2 is empty.
// 	NULL if s2 occurs nowhere in s1.