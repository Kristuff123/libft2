/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:22:45 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:22:53 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*char_ptr;

	total_size = num * size;
	ptr = (void *)malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	char_ptr = (char *)ptr;
	while (total_size--)
		*char_ptr++ = 0;
	return (ptr);
}
