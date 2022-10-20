/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:12:09 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/20 12:58:39 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = strlen(s) - 1;
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	if (i < 0)
		return (NULL);
	while (i >= 0)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/*
The strrchr() function is identical to strchr(), except it locates the
last occurrence of c.
*/

/*
The strchr() function locates the first occurrence of c (converted to a
char) in the string pointed to by s.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the func-
tions locate the terminating `\0'.
The functions strchr() and strrchr() return a pointer to the located
character, or NULL if the character does not appear in the string.
*/