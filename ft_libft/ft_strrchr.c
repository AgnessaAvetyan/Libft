/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:40:25 by aavetyan          #+#    #+#             */
/*   Updated: 2021/01/31 17:45:45 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*t;
	char	*s;

	t = (char*)str;
	s = NULL;
	while (*t)
	{
		if (*t == (char)c)
			s = t;
		t++;
	}
	if (*t == (char)c)
		s = t;
	return (s);
}
