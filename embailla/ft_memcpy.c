/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 16:39:02 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:46:38 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int var;

	var = 0;
	if (((char*)dst)[var] == '\0' || ((char*)src)[var] == '\0')
		return (0);
	else
	{
		while (var <= n && ((char*)src)[var] != '\0')
		{
			if (((char*)dst)[var] == '\0')
				return (0);
			else
			{
				((char*)dst)[var] = ((char*)src)[var];
				var++;
			}
		}
	}
	return (dst);
}
