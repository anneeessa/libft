/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:29:29 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/10 15:11:59 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
    printf("%d\n",ft_isprint(31));
    printf("%d",isprint(31));
}
*/