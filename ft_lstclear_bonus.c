/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:21:40 by aespinos          #+#    #+#             */
/*   Updated: 2022/02/06 20:40:57 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	if (lst || del)
	{
		while (*lst)
		{
			a = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = a;
		}
	*lst = NULL;
	}
	else
		return ;
}
