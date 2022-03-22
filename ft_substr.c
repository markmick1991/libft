/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:33:27 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/03 23:34:09 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	find_len(const char *src, unsigned int start, size_t len)
{
	size_t	length;

	src += start;
	length = ft_strlen(src);
	if (length > len)
		return (len);
	else
		return (length);
}

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char		*dest;
	const char	*p_src;
	size_t		j;
	size_t		length;

	if (!src)
		return (NULL);
	p_src = src;
	length = find_len(src, start, len);
	dest = (char *)ft_calloc(length + 1, sizeof(*dest));
	if (!dest)
		return (NULL);
	j = 0;
	while (*p_src)
	{
		if (start <= p_src - src && j < length)
		{
			dest[j] = *p_src;
			j++;
		}
		p_src++;
	}
	dest[j] = '\0';
	return (dest);
}
