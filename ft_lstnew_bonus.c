/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:35:54 by cdoria            #+#    #+#             */
/*   Updated: 2021/10/10 15:34:55 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ob;

	ob = malloc (sizeof(t_list));
	if (!ob)
		return (NULL);
	ob->content = content;
	ob->next = NULL;
	return (ob);
}
