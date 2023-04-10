/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:22:51 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/21 16:42:34 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlcat() appends string src to the end of dst.  
	It will append at most dstsize - strlen(dst) - 1 characters.  
	It will then NUL-terminate, unless dstsize is 0 or
	the original dst string was longer than dstsize
	return the total length of the string they tried to create
	that means the initial length of dst plus the length of src
	dstsize is total size of final outcome plus null
	If the return value is >= dstsize, the output string has been truncated
	-- calculate the length of the source
	--add the dest to src(chk the null) and add the null
*/

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = dlen;
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

/*
int main()
{
	char src[10] = "hello";
	char dest[] = "abcd";
	printf("%zu",ft_strlcat(dest,src,5));
	printf("%zu",strlcat(dest,src,5));
}
*/