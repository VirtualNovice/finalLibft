/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:20:04 by oumali            #+#    #+#             */
/*   Updated: 2021/11/10 18:43:52 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*sub;

	a = 0;
	b = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1 * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[a] != '\0' && a != start)
		a++;
	while (b != len)
		sub[b++] = s[a++];
	sub[b] = '\0';
	return (sub);
}
