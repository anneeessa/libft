/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:47:30 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/10 14:00:56 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     The isalpha() function returns zero if the character tests false and
     returns non-zero if the character tests true.
*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
    printf("%d\n",ft_isalpha(92));
    printf("%d",isalpha(92));
}
*/