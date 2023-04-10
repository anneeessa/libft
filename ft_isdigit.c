/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:57:33 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/10 14:09:00 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     The isdigit() function return zero if the character tests
     false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
    printf("%d\n",ft_isdigit('7'));
    printf("%d",isdigit('7'));
}
*/
