/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 03:16:05 by oumali            #+#    #+#             */
/*   Updated: 2021/10/18 19:19:41 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ndle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (ndle[a] == '\0')
		return ((char *)str);
	while (str[a] != '\0' && a < len)
	{
		b = 0;
		while (str[a + b] == ndle[b] && a + b < len)
		{
			if (ndle[b + 1] == '\0')
				return ((char *)str + a);
			b++;
		}
		a++;
	}
	return (0);
}
