/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:07:29 by psomjitr          #+#    #+#             */
/*   Updated: 2022/02/27 22:24:37 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	converted = c;
	const unsigned char	*p_s = s;

	while (0 < n--)
		if (*p_s++ == converted)
			return ((void *)--p_s);
	return (NULL);
}
