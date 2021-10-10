/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:46:29 by cdoria            #+#    #+#             */
/*   Updated: 2021/10/10 15:34:59 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp = s;

	while (n)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
		n--;
	}
	return (NULL);
}
