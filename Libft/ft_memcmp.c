/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:15:18 by aavetyan          #+#    #+#             */
/*   Updated: 2021/02/01 17:18:43 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	size_t			i;

	t1 = (unsigned char*)str1;
	t2 = (unsigned char*)str2;
	i = 0;
	while ((t1 != NULL || t2 != NULL) && i < n)
	{
		if (t1[i] - t2[i] != 0)
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}
