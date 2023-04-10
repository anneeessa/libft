/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:17:44 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 17:41:11 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*We use the string s + the variable i
because this is an easier way to send an address of a string position.*/

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
#include<stdio.h>
void my_func(unsigned int i, char *str)
 {
     printf("My inner function: index = %d and %s\n", i, str);
 }


int main()
{
	char str[10] = "hello.";
	ft_striteri(str, my_func);
	printf("The result is %s\n", ft_striteri);
	return 0;
}
*/