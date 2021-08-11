/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:18:26 by aavetyan          #+#    #+#             */
/*   Updated: 2021/02/01 16:25:22 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*temp;
	char	*temp1;

	i = 0;
	temp = (char*)str1;
	temp1 = (char*)str2;
	if (!temp && !temp1)
		return (NULL);
	if (temp1 < temp)
	{
		while (i++ <= n)
			temp[n - i] = temp1[n - i];
	}
	else
	{
		while (n-- > 0)
			*temp++ = *temp1++;
	}
	return (str1);
}
