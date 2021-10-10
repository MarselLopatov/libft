/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:00:16 by cdoria            #+#    #+#             */
/*   Updated: 2021/10/10 15:37:17 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_symbol(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	return (set[i] == c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_is_symbol(set, s1[i]))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_is_symbol(set, s1[i - 1]))
		i--;
	str = (char *)malloc (sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, i + 1);
	return (str);
}
