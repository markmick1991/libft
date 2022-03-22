/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:28:56 by psomjitr          #+#    #+#             */
/*   Updated: 2022/02/28 23:46:37 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dest_len;
	size_t		src_len;
	size_t		i;
	char		*p_dest;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	p_dest = dest + dest_len;
	if (dest_len < size - 1 && 0 < size)
	{
		while (*src && dest_len + i++ < size - 1)
			*p_dest++ = *src++;
		*p_dest = '\0';
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
