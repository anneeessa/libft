/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:43:46 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 17:43:56 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function writes the string s to the file descriptor fd followed by a
'\n' to make a new line.*/

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
