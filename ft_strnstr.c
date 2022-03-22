/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:46:30 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/03 17:28:12 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p_haystack;
	const char	*p_needle;
	const char	*cpy = haystack;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		p_haystack = haystack;
		p_needle = needle;
		while (*p_haystack == *p_needle && (size_t)(p_haystack - cpy) < len)
		{
			if (*p_haystack == '\0' && *p_needle == '\0')
				return ((char *)haystack);
			p_haystack++;
			p_needle++;
		}
		if (*p_needle == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
