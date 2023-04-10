/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:21:38 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:25:05 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function allocates space for count objects of size size and 
allocated memmory is filled with 0*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > (SIZE_MAX / size))
		return (NULL);
	ptr = (void *) malloc (count * size);
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, '\0', count * size);
	return (ptr);
}
/*
int	main(void)
{
	char *ptr;

	ptr = ft_calloc(8539, sizeof(int));
	printf("%s", ptr);

}*/