/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:34:51 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/26 13:20:40 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	sublen;

	if (start > ft_strlen(s))
	{
		dst = malloc(sizeof(char) * 1);
		if (!dst)
			return (0);
		dst[0] = '\0';
		return (dst);
	}
	sublen = ft_strlen(&s[start]) + 1;
	if (len > sublen)
		len = sublen;
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (0);
	ft_strlcpy(dst, &s[start], len + 1);
	return (dst);
}

/*
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

Return value: The substring.
NULL if the allocation fails.
*/