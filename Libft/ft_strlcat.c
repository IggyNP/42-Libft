/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:26:52 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/18 15:22:21 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstlen;
	unsigned int	srclen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen || dstsize == 0)
	{
		return (dstsize + srclen);
	}
	while (dst[i])
	{
		i++;
	}
	while (src[j] && j < dstsize - dstlen - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

/*strlcat() appends string src to the end of dst.  It will append at most
     dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
     dstsize is 0 or the original dst string was longer than dstsize (in prac-
     tice this should not happen as it means that either dstsize is incorrect
     or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
*/