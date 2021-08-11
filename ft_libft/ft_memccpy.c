/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:07:59 by aavetyan          #+#    #+#             */
/*   Updated: 2021/01/31 14:58:20 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*temp;
	const char	*temp1;
	size_t		i;

	temp = (char *)s1;
	temp1 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		temp[i] = temp1[i];
		if (temp1[i] == (char)c)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
