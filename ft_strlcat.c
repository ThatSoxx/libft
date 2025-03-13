/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:17:12 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:44:01 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*pt_src;

	pt_src = (char *)src;
	i = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (pt_src[j])
	{
		if (j < size - i - 1)
			*dst++ = pt_src[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}

// 	DESCRIPTION :
// 	The function ft_strlcat appends the given string src to the end of 
// 	dst. It will append at most dstsize - ft_strlen(dst) - 1 and 
// 	nul-terminate the result.

// 	Note : space for the terminating \0 character must be included in dstsize.

// 	RETURN VALUE :
// 	The total length of the string that it tried to create : the initial
// 	length of dst + the length of src, with the goal to facilitate
// 	truncaction detection.