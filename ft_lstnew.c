/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:19:08 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/01 18:22:29 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A linked list is a sequence of data structures,
 which are connected together via links.
Linked List is a sequence of links which contains items.
 Each link contains a connection to another link.
Dynamic Array.Ease of Insertion/Deletion./search
Direct access to an element is not possible
 in a linked list as in an array by index.
*/

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
int main()
{
	int	*head;
	int	content;
	head = malloc(sizeof(int));
	head->content = 5;
	head->next = NULL;
	return (0);
}*/