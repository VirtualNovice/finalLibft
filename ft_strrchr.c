/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:59:35 by oumali            #+#    #+#             */
/*   Updated: 2021/10/11 19:25:03 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*str;

	str = (char *)s;
	a = ft_strlen(s);
	if (c == '\0')
		return (str + a);
	while (a >= 0)
	{
		if (str[a] == (unsigned char) c)
			return (str + a);
		a--;
	}
	return (NULL);
}
