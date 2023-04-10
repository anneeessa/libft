/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:12:45 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:49:34 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!(new))
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char	*a;
	char	*b;

	a = "abc";
	b = "abc";
	printf("%s \n",strdup(a));
	printf("%s",ft_strdup(b));
}*/