/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:47:00 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/04 19:46:20 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strrchr() function is identical to strchr(), except it locates the
last occurrence of c.
*/

#include<stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int) ft_strlen(s) + 1;
	while (i--)
	{
		if (s[i] == (char) c)
		{
			return ((char *)s + i);
		}
	}
	return (0);
}
/*
#include<string.h>
#include<stdio.h>

int main()
{
    printf("%s\n",ft_strrchr("",32));
    printf("%s",strrchr("",32));
}
*/