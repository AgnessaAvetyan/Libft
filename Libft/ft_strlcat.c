/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:34:43 by aavetyan          #+#    #+#             */
/*   Updated: 2021/01/31 16:49:41 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t j;
	size_t l;
	size_t i;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
		j++;
	if (i >= size)
		j += size;
	else
		j += i;
	l = 0;
	while (i + 1 < size && src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (j);
}
