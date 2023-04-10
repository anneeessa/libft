/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:15:26 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/27 17:11:12 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strnstr() function locates the first occurrence 
	of the null-terminated string needle in the string haystack,
	where not more than (n) characters are searched.
	Characters that appear after a `\0' character are not searched
	If needle is an empty string, haystack is returned; 
	if needle occurs nowhere in haystack, NULL is returned; 
	otherwise a pointer to the first character of the 
	first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack + i);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
/*
#include<string.h>
#include<stdio.h>

int main()
{
    printf("%s\n",ft_strnstr("abcdefgh","def",5));
    printf("%s",strnstr("abcdefgh","def",5));
}
*/