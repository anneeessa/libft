/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:40:56 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:46:17 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	string = malloc(len + 1);
	if (!string)
		return (0);
	i = 0;
	while (i < len)
	{
		string[i] = s[start];
		i++;
		start++;
	}
	string[i] = '\0';
	return (string);
}
/*
#include<stdio.h>
int main()
{
	char const	a[] = "abcdefg123";
	printf("%s", ft_substr(a,10,9));
}
*/