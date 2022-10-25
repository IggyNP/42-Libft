/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:13:36 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/25 16:34:08 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	dst = malloc(ft_strlen(s1) + 1);
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.  The pointer may
subsequently be used as an argument to the function free(3).

If insufficient memory is available, NULL is returned and errno is set to
ENOMEM.
*/