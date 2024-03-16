/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:42:50 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/16 09:40:25 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t	i;

	if (*need == '\0')
		return ((char *)hay);
	while (*hay && len)
	{
		i = 0;
		while (hay[i] && need[i] && hay[i] == need[i] && i < len)
		{
			i++;
		}
		if (need[i] == '\0')
			return ((char *)hay);
		hay++;
		len--;
	}
	return (NULL);
}
