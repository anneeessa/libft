/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:26:23 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 18:26:32 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns the last node of the list.
	lst: The beginning of the list
	Returns the Last node of the list
*/

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
