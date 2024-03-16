/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:38:10 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:38:14 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static size_t	ft_str_len(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	size_t		len;
	char		*new_str;
	char		*ptr;
	const char	*src;

	len = ft_str_len(str);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	ptr = new_str;
	src = str;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (new_str);
}
