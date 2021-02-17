/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaan <jaan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:24:32 by jaan              #+#    #+#             */
/*   Updated: 2021/02/17 13:09:28 by jaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_width(int n)
{
	size_t width;

	width = (n <= 0);
	while (n)
	{
		n /= 10;
		width++;
	}
	return (width);
}

char			*ft_itoa(int n)
{
	char			*num;
	int				r;
	size_t			i;
	const char		neg = (n < 0);
	const size_t	width = get_width(n);

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (!(num = ft_calloc(width + 1, sizeof(char))))
		return (NULL);
	n = (neg) ? -n : n;
	i = 0;
	while (i < width)
	{
		r = n % 10;
		n = n / 10;
		num[i] = "0123456789"[r];
		i++;
	}
	if (neg)
		num[i - 1] = '-';
	return (ft_strrev(num));
}
