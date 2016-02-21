/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 18:17:24 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 15:40:10 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd)
{
	int		var;
	char	c;

	var = 1;
	if (n < 0)
	{
		c = '-';
		ft_putchar_fd(c, fd);
		n *= (-1);
	}
	while ((n / var) >= 10)
		var *= 10;
	while (var > 0)
	{
		ft_putchar_fd(((n / var) % 10 + '0'), fd);
		var /= 10;
	}
}
