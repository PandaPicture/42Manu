/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 18:14:46 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:41:22 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, void *restrict src, int c, size_t n)
{
	int var;

	var = 0;
	if (((char*)dst)[var] == '\0' || ((char*)src)[var] == '\0')
		return (0);
	else
	{
		while (var <= n)
		{
			if (((char*)dst)[var] == '\0' || ((char*)src)[var] == '\0')
				return (0);
			else if (((char*)src)[var] == c)
				return (&((char*)dst)[var]);
			else
			{
				((char*)dst)[var] = ((char*)src)[var];
				var++;
			}
		}
	}
	return (0);
}
