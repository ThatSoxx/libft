/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:14:19 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/27 14:14:58 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// 	DESCRIPTION :
// 	The function ft_strlen measures the length of the given string str,
// 	excluding the terminating \0 character.

// 	RETURN VALUE :
// 	The number of bytes in the string str.