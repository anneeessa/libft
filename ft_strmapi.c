/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:15:11 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 17:15:33 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*It will return a 'fresh' copy of the modified string*/

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (0);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char my_func(unsigned int i, char str)
 {
     printf("My inner function: index = %d and %c\n", i, str);
    return str;
 }

int main()
{
   char str[10] = "hello.";
    // printf("The result is %s\n", str);
    char *result = ft_strmapi(str, my_func);
   printf("The result is %s\n", result);
    return 0;
}*/