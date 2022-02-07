/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:48:09 by oumali            #+#    #+#             */
/*   Updated: 2021/11/12 23:28:46 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_strcount(char const *s, char c)
{
	int	a;
	int	count;
	int	flag;

	a = 0;
	count = 0;
	flag = 0;
	while (s[a] != '\0')
	{
		while (s[a] != c && s[a] != '\0')
		{
			flag = 1;
			a++;
		}
		if (flag == 1)
		{
			count++;
			flag = 0;
			continue ;
		}
		a++;
	}
	return (count);
}

static int	strsize(const char *s, char c, int start)
{
	int	a;
	int	size;

	a = start;
	size = 0;
	while (s[a] != c && s[a] != '\0')
	{
		size++;
		a++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		a;
	char	**split;
	int		strcount;

	a = 0;
	strcount = 0;
	if (s == NULL)
		return (NULL);
	split = (char **)malloc((ft_strcount(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (s[a] != '\0')
	{
		while (s[a] == c)
			a++;
		if (s[a] != c && s[a] != '\0')
		{
			split[strcount++] = ft_substr(s, a, strsize(s, c, a));
			while (s[a] != c && s[a] != '\0')
				a++;
		}
	}
	split[strcount] = NULL;
	return (split);
}
