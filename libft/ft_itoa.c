/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:11:28 by oumali            #+#    #+#             */
/*   Updated: 2021/11/11 21:48:52 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		a;

	a = numlen(n);
	str = (char *)malloc(sizeof(char) * (a + 1));
	if (str == NULL)
		return (NULL);
	str[a] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[a - 1] = '0';
	while (n != 0)
	{
		if (n < 0)
			str[a - 1] = ((n % 10) * -1) + 48;
		else
			str[a - 1] = (n % 10) + 48;
		n /= 10;
		a--;
	}
	return (str);
}
