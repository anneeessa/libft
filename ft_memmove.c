/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:33:23 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 14:47:23 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function copies len bytes from string src to string dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;
	size_t		i;

	source = (const char *)src;
	destination = (char *)dst;
	i = 0;
	if (dst == src)
	{
		return (dst);
	}
	if (destination > source)
	{
		while (len--)
		{
			destination[len] = source[len];
		}
		return (dst);
	}
	while (i < len)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char dst[]="Hello";
	char src[]="Hi1Hello";
	printf("%s\n", ft_memmove(dst,src,4));
	char dst1[]="Hello";
	char src1[]="Hi1Hello";
	printf("%s", memmove(dst1,src1,4));
}
*/
