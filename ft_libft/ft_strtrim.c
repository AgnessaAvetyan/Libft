/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:32:19 by aavetyan          #+#    #+#             */
/*   Updated: 2021/01/31 18:32:32 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isinstr(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		first;
	int		last;
	int		i;

	i = 0;
	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_isinstr(set, s1[first]))
		first++;
	while (last > first && ft_isinstr(set, s1[last - 1]))
		last--;
	if (!(temp = malloc(sizeof(char) * (last - first + 1))))
		return (NULL);
	while (first < last)
	{
		temp[i++] = s1[first];
		++first;
	}
	temp[i] = 0;
	return (temp);
}
