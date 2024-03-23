/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:22:01 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:22:09 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (s == NULL)
		return ;
	if (n == 0)
		return ;
	ptr = s;
	while (n--)
		*ptr++ = 0;
}
