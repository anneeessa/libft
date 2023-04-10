/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:54:31 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:57:09 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function copies n bytes from memory area src to memory area dst
*/

#include<stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	if (!dst && !src)
		return (0);
	i = 0;
	ds = (char *) dst;
	sr = (char *) src;
	while (i < n)
	{
		ds[i] = sr[i];
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
	printf("%s\n", ft_memcpy(dst,src,5));
	char dst1[]="Hello";
	char src1[]="Hi1Hello";
	printf("%s", memcpy(dst1,src1,5));
}
*/