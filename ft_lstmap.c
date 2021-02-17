/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaan <jaan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 22:32:10 by jaan              #+#    #+#             */
/*   Updated: 2021/02/03 22:41:29 by jaan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	const t_list	*lstp = lst;
	void			*is_success;
	t_list			*ret;
	t_list			*new;

	ret = NULL;
	new = NULL;
	while (lstp)
	{
		if ((is_success = f(lstp->content)))
		{
			if (!(new = ft_lstnew(is_success)))
			{
				ft_lstclear(&lst, del);
				return (NULL);
			}
			ft_lstadd_back(&ret, new);
		}
		lstp = lstp->next;
	}
	return (ret);
}
