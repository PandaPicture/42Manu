/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 15:37:36 by embailla          #+#    #+#             */
/*   Updated: 2016/02/16 16:04:23 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	int		var;
	char	c;

	var = 1;
	if (n < 0 )
	{
		c = '-';
		ft_putchar(c);
		n *= (-1);
	}
	while ((n / var) >= 10)
		var *= 10;
	while (var > 0)
	{
		ft_putchar(((n / var) % 10 + '0'));
		var /= 10;
	}
}
