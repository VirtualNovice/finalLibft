/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 03:14:52 by oumali            #+#    #+#             */
/*   Updated: 2021/10/18 21:04:53 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	dstlen;
	size_t	srclen;

	a = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[a] != '\0' && dstlen + a < dstsize - 1)
	{
		dst[dstlen + a] = src[a];
		a++;
	}
	dst[dstlen + a] = '\0';
	return (dstlen + srclen);
}
