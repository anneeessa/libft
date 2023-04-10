/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:44:32 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 17:44:38 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function is exactly the same as our ft_putnbr function except that we
 * will be using our ft_putchar_fd function instead of ft_putchar beacuse we 
 * will be accepting a parameter for this function that is 
 our file descriptor.*/

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		nb = nb * -1;
	}
	if (nb >= 10)
		ft_putnbr_fd (nb / 10, fd);
	ft_putchar_fd ((nb % 10) + '0', fd);
}
