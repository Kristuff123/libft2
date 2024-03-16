/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:32:55 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:33:00 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	char		*dest_end;
	const char	*src_ptr;
	const char	*src_end;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	if (src_ptr < dest_ptr && src_ptr + n > dest_ptr)
	{
		src_end = src_ptr + n;
		dest_end = dest_ptr + n;
		while (n--)
			*(--dest_end) = *(--src_end);
	}
	else
	{
		while (n--)
			*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
