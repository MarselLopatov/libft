/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:56:36 by cdoria            #+#    #+#             */
/*   Updated: 2021/10/10 15:51:29 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *) haystack);
	i = 0;
	while (needle[i] && i < len && haystack[i])
	{
		if (haystack[i] != needle[i])
		{
			haystack++;
			i = -1;
			len--;
		}
		i++;
	}
	if (!needle[i])
		return ((char *)haystack);
	return (NULL);
}
