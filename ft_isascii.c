/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:22:52 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/10 14:28:49 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
test for ASCII character
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
#include<ctype.h>
#include<stdio.h>
int main()
{
    printf("%d\n",ft_isascii(127));
    printf("%d",isascii(127));
}
*/