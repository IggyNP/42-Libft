/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:54:35 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/18 15:59:12 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

/*
The tolower() function converts an upper-case letter to the corresponding
lower-case letter.  The argument must be representable as an unsigned
char or the value of EOF.

If the argument is an upper-case letter, the tolower() function returns
the corresponding lower-case letter if there is one; otherwise, the argu-
ment is returned unchanged.
*/