/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:22:34 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/01 23:40:29 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *src, const char *set)
{
	const char	*p_start;
	const char	*p_end;
	char		*dest;

	if (!src || !set)
		return (NULL);
	p_start = src;
	p_end = src + ft_strlen(src);
	while (*p_start && ft_strchr(set, *p_start))
		p_start++;
	while (p_end > p_start && ft_strchr(set, *(p_end - 1)))
		p_end--;
	dest = (char *)ft_calloc(p_end - p_start + 1, sizeof(*dest));
	if (!dest)
		return (NULL);
	dest = ft_memcpy(dest, p_start, p_end - p_start);
	return (dest);
}
