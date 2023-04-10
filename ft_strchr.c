/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:46:32 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/28 18:17:04 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
To check a letter by ascii value in a string.
If found return value from the letter onwards.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			return (i + (char *)s);
		}
		i++;
	}
	if (s[i] == (char) c)
	{
		return (i + (char *)s);
	}
	return (0);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{
    printf("%s\n",ft_strchr("",'\0'));
   	printf("%s",strchr("",'\0'));
}
*/