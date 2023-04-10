/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:57:30 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/04 16:31:08 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function locates the first occurrence of c (converted to an
unsigned char) in string s.
*/
#include<stddef.h>

void	*ft_memchr(const void *s, int c, size_t	n)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = (unsigned char *) s;
	while (i < n)
	{
		if (ch[i] == (unsigned char) c)
		{
			return (i + (char *)s);
		}
		i++;
	}
	return (0);
}

/*
#include<string.h>
#include<stdio.h>
int main()
{
    printf("%s\n",ft_memchr("abcd1c",99, 4));
    printf("%s",memchr("abcd1c",99, 4));
}
*/