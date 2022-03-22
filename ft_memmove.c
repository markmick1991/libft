/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:27:13 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/01 18:08:19 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;

	if (!dest && !src)
		return (0);
	p_dest = dest;
	p_src = src;
	if (p_src < p_dest && p_dest < p_src + n)
	{
		p_dest += n;
		p_src += n;
		while (0 < n--)
			*--p_dest = *--p_src;
	}
	else
	{
		while (0 < n--)
			*p_dest++ = *p_src++;
	}
	return (dest);
}
