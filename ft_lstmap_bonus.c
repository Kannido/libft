/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vilignon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:13:51 by vilignon          #+#    #+#             */
/*   Updated: 2022/11/15 19:35:21 by vilignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*start;
	t_list	*new;

	if (lst && f)
	{
		start = ft_lstnew((f)(lst->content));
		new = start;
		while (lst->next)
		{
			lst = lst->next;
			new->next = ft_lstnew((f)(lst->content));
			if (!new->next)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			new = new->next;
		}
		return (start);
	}
	return (NULL);
}
