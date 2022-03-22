/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:31:23 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/01 21:26:43 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*p_s;
	size_t	i;

	if (!s)
		return (0);
	p_s = ft_strdup(s);
	if (!p_s)
		return (0);
	i = 0;
	while (*(p_s + i))
	{
		*(p_s + i) = (*f)(i, *(p_s + i));
		i++;
	}
	return (p_s);
}
