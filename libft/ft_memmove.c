/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:42:59 by oumali            #+#    #+#             */
/*   Updated: 2021/10/11 22:39:46 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src2;
	char	*dest2;
	int		a;

	src2 = (char *)src;
	dest2 = (char *)dest;
	if (dest2 > src2)
	{
		a = n - 1;
		while (a >= 0)
		{
			dest2[a] = src2[a];
			a--;
		}
		return (dest);
	}
	ft_memcpy (dest, src, n);
	return (dest);
}
