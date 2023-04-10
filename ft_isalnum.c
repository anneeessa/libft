/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:12:04 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/10 14:21:45 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Tests for any character for which isalpha or isdigit is true.
Returns zero if the character tests false and 
returns non-zero if the character tests true.
*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
    printf("%d\n",ft_isalnum(65));
    printf("%d",isalnum(65));
}
*/
