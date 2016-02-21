/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 12:18:42 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:41:02 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int var;
	int var2;
	int var3;

	var = 0;
	var2 = 0;
	var3 = 0;
	while (var <= n)
	{
		while (((char*)s1)[var2] != '\0')
			var2++;
		while (((char*)s2)[var3] != '\0')
			var3++;
		var++;
	}
	var = var3 - var2;
	if (var < 0)
		var = var * (-1);
	return (var);
}
