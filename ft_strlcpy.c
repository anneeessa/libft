/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:29:43 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:46:01 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return ((ft_strlen(src)));
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char dst[]="Hello";
	char src[]="Hi";
	printf("%zu\n",ft_strlcpy(dst, src,4));
	printf("%s\n%s\n",dst,src);
	char dst1[]="Hello";
	char src1[]="Hi";
	printf("%lu\n",strlcpy(dst1, src1,4));
	printf("%s\n%s\n",dst1,src1);
}
*/