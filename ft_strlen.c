/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:14:27 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 15:23:37 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Length of string s
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include<string.h>
#include<stdio.h>
int main()
{
    printf("%zu\n",ft_strlen("abc"));
    printf("%lu",strlen("abc"));
}
*/