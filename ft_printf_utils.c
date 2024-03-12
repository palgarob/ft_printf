/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepaloma <pepaloma@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:22:15 by pedropalomare     #+#    #+#             */
/*   Updated: 2023/10/28 13:23:08 by pedropalomare    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char)c;
	if (*s == c)
		return ((char *)s);
	while (*s++)
	{
		if (*s == c)
			return ((char *)s);
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		s++;
		n++;
	}
	return (n);
}
