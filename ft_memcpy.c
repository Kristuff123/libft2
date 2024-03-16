/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:31:50 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:31:54 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d_point;
	const char	*s_point;
	size_t		i;

	d_point = (char *)dest;
	s_point = (const char *)src;
	i = 0;
	while (i < n)
	{
		d_point[i] = s_point[i];
		i++;
	}
	return (dest);
}
