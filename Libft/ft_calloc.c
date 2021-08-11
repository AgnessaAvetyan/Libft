/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:16:13 by aavetyan          #+#    #+#             */
/*   Updated: 2021/01/31 14:29:27 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitem, size_t size)
{
	char	*ptr;
	size_t	i;

	if (!(ptr = malloc(nitem * size)))
		return (NULL);
	i = 0;
	while (i < nitem * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
