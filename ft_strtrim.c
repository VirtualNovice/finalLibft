/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:17:26 by oumali            #+#    #+#             */
/*   Updated: 2021/11/01 21:31:51 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char *strbeg(char const *s1, char const *set)
{
    size_t  a;
    size_t  b;

    a = 0;
    while (s1[a] != '\0')
    {
        b = 0;
        while (set[b] != '\0')
        {
            if (set[b] == s1[a])
                break ;
            else if (set[b + 1] == '\0')
                return (s1 + a);
            b++;
        }
        a++;
    }
    if (*set == '\0')
        a = 0;
    return (s1 + a);
}
static  size_t strend(char const *s1, char const *set, size_t len)
{
    size_t  a;
    size_t  b;

    if (len == 0)
        return (len);
    else
        a = len - 1;
    while (s1[a] != 0)
    {
        b = 0;
        while (set[b] != '\0')
        {
            if (set[b] == s1[a])
                break ;
            else if (set[b + 1] == '\0')
                return (a);
            b++;
        }
        a--;
    }
    if (*set == '\0')
        a = len - 1;
    return (a);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    const char    *str3;
    char    *str4;
    size_t  size;

    if (!s1 || !set)
        return (NULL);
    str3 = strbeg(s1, set);
    size = ft_strlen(str3);
    size = strend(str3,set,size);    
    str4 = ft_substr(str3, 0, size + 1);
    return (str4);
}