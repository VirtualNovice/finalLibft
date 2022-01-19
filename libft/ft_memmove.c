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
	char	*csrc;
	char	*cdest;
	int		a;

	csrc = (char *)src;
	cdest = (char *)dest;
	if (cdest > csrc)
	{
		a = n - 1;
		while (a >= 0)
		{
			cdest[a] = csrc[a];
			a--;
		}
		return (dest);
	}
	ft_memcpy (dest, src, n);
	return (dest);
}
