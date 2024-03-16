/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:39:13 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:39:18 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	check_len(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

static char	*str_cpy(char *dest, char const *str1, char const *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		dest[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		dest[i] = str2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = check_len(s1);
	len_s2 = check_len(s2);
	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	str_cpy(result, s1, s2);
	return (result);
}
