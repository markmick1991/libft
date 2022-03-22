/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:15:18 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/02 00:02:23 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	ch = c;
	const char	*p_c = NULL;

	while (42)
	{
		if (*s == ch)
			p_c = s;
		if (*s++ == '\0')
			return ((char *)p_c);
	}
}
