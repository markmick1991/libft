/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:38:06 by psomjitr          #+#    #+#             */
/*   Updated: 2022/02/27 22:39:46 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	const unsigned char	converted = c;
	unsigned char		*p_b;

	p_b = b;
	while (0 < len--)
		*p_b++ = converted;
	return (b);
}
