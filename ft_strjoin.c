/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:44:23 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/01 23:33:24 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *src1, const char *src2)
{
	char	*dest;
	char	*p_dest;

	if (!src1 || !src2)
		return (NULL);
	dest = ft_calloc(ft_strlen(src1) + ft_strlen(src2) + 1, sizeof(*dest));
	if (!dest)
		return (NULL);
	p_dest = dest;
	while (*src1)
		*p_dest++ = *src1++;
	while (*src2)
		*p_dest++ = *src2++;
	return (dest);
}
