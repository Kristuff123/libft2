/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:35:29 by kgraczyk          #+#    #+#             */
/*   Updated: 2024/03/15 22:35:34 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

static void	put_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		put_char('0', fd);
		return ;
	}
	if (n == -2147483648)
	{
		ft_putnbr_fd(-214748364, fd);
		put_char('8', fd);
		return ;
	}
	if (n < 0)
	{
		put_char('-', fd);
		n *= -1;
	}
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	put_char('0' + n % 10, fd);
}
