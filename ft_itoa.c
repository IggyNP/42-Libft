/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:38 by inavarro          #+#    #+#             */
/*   Updated: 2022/11/15 13:14:42 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int n)
{
	int	i;
	int	aux;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		aux = n % 10;
		if (aux < 0)
		{
			n = n * -1;
			i++;
		}
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	int		pos;
	long	nl;

	nl = n;
	len = ft_intlen(nl);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (nl < 0)
	{
		nl = -nl;
		s[0] = '-';
	}
	if (!nl)
		s[0] = '0';
	pos = len - 1;
	while (nl > 0)
	{
		s[pos--] = ((nl % 10) + '0');
		nl = (nl / 10);
	}
	s[len] = '\0';
	return (s);
}

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/