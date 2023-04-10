/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:47:16 by anmohamm          #+#    #+#             */
/*   Updated: 2023/01/24 19:10:12 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	result = result * sign;
	return (result);
}

/*
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char	a[] =  "   --+--+1234ab567";
	printf("%d\n",ft_atoi(a));
	char	b[] =  "   --+--+1234ab567";
	printf("%d",atoi(b));
}
*/