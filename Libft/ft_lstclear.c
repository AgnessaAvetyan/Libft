/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:34:52 by aavetyan          #+#    #+#             */
/*   Updated: 2021/02/01 17:34:40 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *curent;

	if (*lst)
	{
		while (*lst)
		{
			curent = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = curent;
		}
	}
}
