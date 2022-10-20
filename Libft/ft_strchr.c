/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:03:47 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/20 11:10:48 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if ((char) c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/*
The strchr() function locates the first occurrence of c (converted to a
char) in the string pointed to by s.  The terminating null character is
considered to be part of the string; therefore if c is `\0', the func-
tions locate the terminating `\0'.
The functions strchr() and strrchr() return a pointer to the located
character, or NULL if the character does not appear in the string.
*/