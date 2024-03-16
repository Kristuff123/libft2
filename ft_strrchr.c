/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:43:17 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:43:22 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last_occurrence = s;
		s++;
	}
	if (last_occurrence != NULL)
		return ((char *)last_occurrence);
	else if (c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
