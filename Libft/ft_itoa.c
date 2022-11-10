/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:38 by inavarro          #+#    #+#             */
/*   Updated: 2022/11/08 23:15:30 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = n <= 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*alloc;
	int		start;
	long	nl;

	nl = (long)n;
	start = nl < 0;
	len = ft_intlen(n);
	alloc = (char *)malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (NULL);
	alloc[len] = '\0';
	if (nl < 0)
	{
		nl = -nl;
		alloc[0] = '-';
	}
	len--;
	while (len >= start)
	{
		alloc[len] = ((nl % 10) + 48);
		nl = (nl / 10);
		len--;
	}
	return (alloc);
}

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/