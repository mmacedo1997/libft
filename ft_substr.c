/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:16:08 by mmacedo           #+#    #+#             */
/*   Updated: 2021/02/18 18:16:09 by mmacedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	min_len;
	char			*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	else
	{
		min_len = ft_strlen(&s[start]);
		if (min_len < len)
			len = min_len;
		if (!(sub = malloc(sizeof(char) * len + 1)))
			return (NULL);
		i = start;
		while (s[i] && (i - start) < len)
		{
			sub[i - start] = s[i];
			i++;
		}
		sub[i - start] = '\0';
	}
	return (sub);
}