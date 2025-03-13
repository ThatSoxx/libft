/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:19:49 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 11:45:03 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(src);
	ptr = (char *) malloc (sizeof (char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// 	DESCRIPTION :
// 	The function ft_strdup duplicates the given string s1 by allocating 
// 	memory and performing a copy of the given string.

// 	RETURN VALUE :
// 	A pointer to the new string. NULL if the memory allocation fails.