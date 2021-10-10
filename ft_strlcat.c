/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:19:21 by cdoria            #+#    #+#             */
/*   Updated: 2021/10/10 15:36:37 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_len;

	if (!src && !dst)
		return (0);
	if (!size)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	index = 0;
	while (index + dst_len < size - 1 && src[index])
	{
		dst[index + dst_len] = src[index];
		index++;
	}
	dst[index + dst_len] = '\0';
	return (dst_len + ft_strlen(src));
}
