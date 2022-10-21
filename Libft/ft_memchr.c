/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:06:31 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/21 11:36:50 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((char)c == ((char *)s)[i])
			return ((unsigned char *)&s[i]);
		i++;
	}
	return (0);
}

/*
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s. (UP TO N BYTES ANALYZED)

The memchr() function returns a pointer to the byte located, or NULL if
no such byte exists within n bytes. 
*/