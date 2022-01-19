/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 03:16:16 by oumali            #+#    #+#             */
/*   Updated: 2021/11/10 21:33:29 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	space(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\f' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		a;
	int		b;
	size_t	c;

	a = 0;
	b = 1;
	c = 0;
	while (space(str[a]) == 1)
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
		c = (c * 10) + (str[a++] - '0');
	if (c >= 9223372036854775808UL && b == -1)
		return (0);
	else if (c >= 9223372036854775807 && b == 1)
		return (-1);
	else
		return (c * b);
}
