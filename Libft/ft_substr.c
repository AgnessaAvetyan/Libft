/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:33:39 by aavetyan          #+#    #+#             */
/*   Updated: 2021/02/01 16:26:12 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned	int start, size_t len)
{
	char	*temp;
	size_t	i;
	size_t	j;

	j = 0;
	if (!(temp = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			temp[j] = s[i];
			j++;
		}
		i++;
	}
	temp[j] = '\0';
	return (temp);
}
