/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:53:34 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/07 12:05:43 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

//The memset() function writes len bytes of value c 
//(converted to an unsigned char) to the string b.