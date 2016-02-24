/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 19:18:12 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:48:35 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy;
	size_t			var;

	var = 0;
	cpy = (unsigned char*)s;
	if (s && n > 0)
	{
		while (var < n)
		{
			if (cpy[var] == (unsigned char)c)
				return ((void*)&cpy[var]);
			var++;
		}
	}
	return (NULL);
}
