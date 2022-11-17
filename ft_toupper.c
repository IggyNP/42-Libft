/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inavarro <inavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:22:53 by inavarro          #+#    #+#             */
/*   Updated: 2022/10/18 15:53:52 by inavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*
The toupper() function converts a lower-case letter to the corresponding
upper-case letter.  The argument must be representable as an unsigned
char or the value of EOF.

Although the toupper() function uses the current locale, the toupper_l()
function may be passed a locale directly. See xlocale(3) for more infor-
mation.

If the argument is a lower-case letter, the toupper() function returns
the corresponding upper-case letter if there is one; otherwise, the argu-
ment is returned unchanged.
*/