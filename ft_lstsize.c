/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:25:43 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 18:25:51 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == 0)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
