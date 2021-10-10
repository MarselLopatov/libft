/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:13:30 by cdoria            #+#    #+#             */
/*   Updated: 2021/10/10 15:35:11 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_temp;
	unsigned const char	*src_temp = src;
	size_t				i;

	dest_temp = dest;
	if (dest_temp > src_temp)
	{
		i = 1;
		while (i <= n)
		{
			dest_temp[n - i] = src_temp[n - i];
			i++;
		}
	}
	else if (dest || src)
	{
		i = 0;
		while (i < n)
		{
			dest_temp[i] = src_temp[i];
			i++;
		}
	}
	return (dest);
}
