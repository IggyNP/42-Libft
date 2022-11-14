/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:51:06 by inavarro          #+#    #+#             */
/*   Updated: 2022/11/14 16:57:43 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- >= ft_strlen(needle))
	{
		if (ft_memcmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*
The strnstr() function locates the first occurrence of the null-terminated
string needle in the string haystack, where not more than len characters
are searched.  Characters that appear after a ‘\0’ character are not
searched.  Since the strnstr() function is a FreeBSD specific API, it
should only be used when portability is not a concern.

If needle is an empty string, haystack is returned; if needle occurs
nowhere in haystack, NULL is returned; otherwise a pointer to the first
character of the first occurrence of needle is returned.
*/