/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:58:07 by cdoria            #+#    #+#             */
/*   Updated: 2021/10/10 15:35:09 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_temp;
	const char	*src_temp = src;

	if (!dest && !src)
		return (NULL);
	dest_temp = dest;
	while (n)
	{
		*dest_temp++ = *src_temp++;
		n--;
	}
	return (dest);
}
