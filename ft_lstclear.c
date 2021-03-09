/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacedo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:56:13 by mmacedo           #+#    #+#             */
/*   Updated: 2021/03/09 16:56:15 by mmacedo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*tmp;
	t_list		*current;

	if (lst && del)
	{
		tmp = *lst;
		while (tmp)
		{
			current = tmp;
			del(tmp->content);
			free(tmp);
			tmp = current->next;
		}
		*lst = NULL;
	}
}
