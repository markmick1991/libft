/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psomjitr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 21:56:53 by psomjitr          #+#    #+#             */
/*   Updated: 2022/03/03 23:36:01 by psomjitr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **split, size_t n)
{
	while (0 < n--)
		free(*split++);
	free (split);
}

char	**ft_splash(char **split, const char *s, char c, size_t n)
{
	const char	*p_start = s;
	const char	*p_end = s;
	size_t		i;

	i = 0;
	while (i < n)
	{
		while (*p_start == c && *p_start != '\0')
			p_start++;
		if (*p_start == '\0')
			break ;
		p_end = p_start;
		while (*p_end != c && *p_end != '\0')
			p_end++;
		split[i] = (char *)ft_calloc(p_end - p_start + 1, sizeof (*split[i]));
		if (!split[i])
			ft_free(split, n);
		split[i] = ft_memcpy(split[i], p_start, p_end - p_start);
		p_start = p_end;
		i++;
	}
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char		**split;
	const char	*p_s;
	size_t		n;

	if (!s)
		return (NULL);
	p_s = s;
	n = 1;
	while (*p_s)
	{
		while (*p_s == c)
			p_s++;
		if (*p_s)
			n++;
		while (*p_s && (*p_s != c))
			p_s++;
	}
	split = (char **)ft_calloc(n, sizeof(*split));
	if (!split)
		return (NULL);
	split = ft_splash(split, s, c, n);
	return (split);
}
