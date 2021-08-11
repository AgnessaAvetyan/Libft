/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:16:48 by aavetyan          #+#    #+#             */
/*   Updated: 2021/01/29 16:33:59 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char		*temp;
	const char	*temp1;

	temp = (char*)dest;
	temp1 = (const char*)src;
	while (num--)
		*temp++ = *temp1++;
	return (dest);
}
