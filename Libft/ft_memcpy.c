/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:19:06 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/07 09:27:27 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy( void *dst, const void *src, size_t count )
{
	char *d;
	char *s;
	size_t i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*	The memcpy() function copies n bytes from memory area src to memory area
	dst.  If dst and src overlap, behavior is undefined.  Applications in which
	dst and src might overlap should use memmove(3) instead.
*/
