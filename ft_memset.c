/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:26:50 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/12 15:46:54 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function writes len bytes of value c (converted to an
unsigned char) to the string b.
*/

#include<stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = (unsigned char *) b;
	while (i < len)
	{
		ch[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "abc def ghi jkl";
	printf("%s\n", ft_memset(str, 101, 7));
	printf("%s", memset(str, 101, 7));
}
*/