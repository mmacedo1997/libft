/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:57:52 by mmacedo           #+#    #+#             */
/*   Updated: 2021/03/09 16:58:04 by mmacedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		lst_size;

	lst_size = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		lst_size++;
	}
	return (lst_size);
}
