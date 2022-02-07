/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:25:22 by oumali            #+#    #+#             */
/*   Updated: 2021/10/11 18:49:03 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*str;

	str = (char *)s;
	if (c == '\0')
		return (str + ft_strlen(str));
	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == (char)c)
			return (str + a);
		a++;
	}
	return (NULL);
}
