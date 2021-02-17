/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaan <jaan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:54:18 by jaan              #+#    #+#             */
/*   Updated: 2021/02/17 12:45:13 by jaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	strlen;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	strlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc((strlen + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(str + ft_strlcpy(str, s1, strlen + 1), s2, strlen + 1);
	return (str);
}
