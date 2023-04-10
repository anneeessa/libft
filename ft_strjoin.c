/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:41:40 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:58:50 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*string;

	if (!s1 || !s2)
		return (NULL);
	string = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!string)
		return (0);
	while (s1[j] != '\0')
	{
		string[i++] = s1[j++];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';
	return (string);
}
/*
#include<stdio.h>
int main()
{
	printf("%s", ft_strjoin("abc", "def"));
}
*/