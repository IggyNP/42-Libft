/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:53:34 by inavarro          #+#    #+#             */
/*   Updated: 2022/09/20 18:54:16 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> //replace with libft.h

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= len)
	{
		((unsigned char *)b)[i] = c; //why parenthesis like that for casting?
		i++;
	}
	return (b);
}

//The memset() function writes len bytes of value c 
//(converted to an unsigned char) to the string b.