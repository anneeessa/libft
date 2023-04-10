/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:05:01 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:26:17 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			if (s[i] == '\0')
				return (count += 1);
		}
		i++;
	}
	return (count += 1);
}

char	*ft_findword(char const *s, int start, int end)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		count;

	if (!s)
		return (NULL);
	split = (char **)malloc(ft_wordcount(s, c) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	count = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && count < 0)
			count = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && count >= 0)
		{
			split[j++] = ft_findword(s, count, i);
			count = -1;
		}
	}
	split[j] = 0;
	return (split);
}
/*
int main(void)
{
    char **sp;

    sp = ft_split("ab cd ef", ' ');
    while(*sp!= 0)
    {
        printf("%s\n", *sp);
        *sp++;
    }
}*/