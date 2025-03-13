/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaulke <lgaulke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:18:15 by lgaulke           #+#    #+#             */
/*   Updated: 2024/11/28 09:52:29 by lgaulke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_len(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num >= 1)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*ft_num_to_str(long num, char *str, size_t len)
{
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	len--;
	while (len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (str[0] != '-')
		str[0] = (num % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*str;

	num = n;
	len = ft_itoa_len(num);
	str = 0;
	str = ft_num_to_str(num, str, len);
	if (!str)
		return (NULL);
	return (str);
}

// 	DESCRIPTION :
// Calculate Length: ft_itoa_len determines the length of the string needed 
// 	to represent the number including space for a negative sign if necessary.
// Allocate Memory: ft_num_to_str allocates memory for the string.
// Convert Number to String: ft_num_to_str fills the allocated string 
// 	with the digits of the number, handling negative numbers appropriately.
// Return String: ft_itoa returns the resulting string.

// 	RESULT VALUE :
// 	The string of the converted integer.