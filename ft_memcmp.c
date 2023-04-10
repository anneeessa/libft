/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:10:38 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/04 16:30:22 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*first;
	const unsigned char	*second;

	first = (const unsigned char *)s1;
	second = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="Hello";
	char s2[]="Hi12";
	printf("%d\n",ft_memcmp(s1,s2,1));
	printf("%d",memcmp(s1,s2,1));
}
*/