/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaan <jaan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 21:42:00 by jaan              #+#    #+#             */
/*   Updated: 2021/02/03 21:46:10 by jaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rear;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (!(ft_strchr(set, *s1)))
			break ;
		s1++;
	}
	rear = (char *)s1 + (ft_strlen(s1) - 1);
	while (rear >= s1)
	{
		if (!(ft_strchr(set, *rear)))
			break ;
		rear--;
	}
	return (ft_strndup(s1, ++rear - s1));
}
