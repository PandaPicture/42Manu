/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:00:50 by embailla          #+#    #+#             */
/*   Updated: 2016/02/16 15:37:12 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int var;
	int var2;

	var = 0;
	if (str[var] >= '0' && str[var] <= '9')
	{
		while (str[var] >= '0' && str[var] <= '9')
		{
			var2 += str[var] - '0';
			var2 = var2 * 10;
			var++;
		}
		var2 = var2 / 10;
		return (var2);
	}
	else
		return (0);
}
