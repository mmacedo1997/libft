/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:15:43 by mmacedo           #+#    #+#             */
/*   Updated: 2021/02/18 18:15:45 by mmacedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int a)
{
	char	c;
	int		i;
	int		i_last;

	c = (char)a;
	i = 0;
	i_last = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i_last = i;
		i++;
	}
	if (a == 0)
		return (((char *)str + i));
	if (i_last < 0)
		return (NULL);
	return (((char *)str + i_last));
}
