/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:14:32 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/01 17:45:49 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;

	if (!dest && !src)
		return (0);
	p_dest = dest;
	p_src = src;
	while (0 < n--)
		*p_dest++ = *p_src++;
	return (dest);
}
