/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:11:34 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/01 15:57:52 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	char		*p_dest;
	const char	*p_src;
	size_t		n;

	p_dest = dest;
	p_src = src;
	n = destsize;
	if (n > 0)
	{
		while (0 < n-- - 1)
		{
			if (*p_src == '\0')
				break ;
			*p_dest++ = *p_src++;
		}
		*p_dest = '\0';
	}
	while (*p_src)
		p_src++;
	return (p_src - src);
}
