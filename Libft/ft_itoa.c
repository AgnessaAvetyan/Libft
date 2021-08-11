/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavetyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:50:08 by aavetyan          #+#    #+#             */
/*   Updated: 2021/02/01 15:56:43 by aavetyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenght(int num)
{
	int count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		count++;
		num *= -1;
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*str;
	long	num;

	num = n;
	l = ft_lenght(num);
	str = (char *)malloc(sizeof(char) * (l));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str[0] = '0';
	str[l] = '\0';
	while (num)
	{
		str[l - 1] = (num % 10) + '0';
		num /= 10;
		l--;
	}
	return (str);
}
