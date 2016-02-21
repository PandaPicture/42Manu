/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:36:39 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:47:55 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int var;
	int var2;

	var = 0;
	var2 = 0;
	while (((char*)dst)[var] != '\0')
		var++;
	while (var2 <= len)
	{
		((char*)dst)[var] = ((char*)src)[var2];
		var2++;
		var++;
	}
	return (&((char*)dst)[0]);
}
