/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:38:51 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/13 13:23:40 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function writes n zeroed bytes to the string s.
If n is zero, bzero() does nothing.
*/

#include<stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = (unsigned char *) s;
	while (i < n)
	{
		ch[i] = '\0';
		i++;
	}
}

/*
#include<stdio.h>
#include<strings.h>
#include<string.h>
int main()
{
	char str[] = "abc def ghi jkl";
	ft_bzero(str, 1);
	printf("%c\n",str[1]);
	char str1[] = "abc def ghi jkl";
	bzero(str1, 1);
	printf("%c", str1[1]);
}
*/