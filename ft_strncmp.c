/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:39:04 by psomjitr          #+#    #+#             */
/*   Updated: 2022/02/28 16:41:28 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (0 < n--)
	{
		if (*s1 != *s2)
		{
			if (*(unsigned char *)s1 < *(unsigned char *)s2)
				return (-1);
			else
				return (1);
		}
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}
