/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 03:15:14 by oumali            #+#    #+#             */
/*   Updated: 2021/10/11 19:00:29 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{			
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			a;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	a = 0;
	while (a < n)
	{
		if ((str1[a] != str2[a]) || (str1[a] == '\0'))
			return (str1[a] - str2[a]);
		a++;
	}
	return (0);
}
