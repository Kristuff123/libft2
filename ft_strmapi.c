/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:41:39 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:41:55 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*allocate_memory(size_t size)
{
	return ((char *)malloc(size));
}

static void	apply_ft(const char *s, char (*f)(unsigned int, char), char *rt)
{
	unsigned int	index;

	index = 0;
	while (*s)
	{
		rt[index] = f(index, *s++);
		index++;
	}
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	length;
	char	*result;

	if (!s)
		return (NULL);
	length = 0;
	while (s[length])
		length++;
	result = allocate_memory(length + 1);
	if (!result)
		return (NULL);
	apply_ft(s, f, result);
	result[length] = '\0';
	return (result);
}
