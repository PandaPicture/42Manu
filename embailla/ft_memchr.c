/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 19:18:12 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:40:53 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int var;

	var = 0;
	if (((char*)s)[var] == '\0')
		return (0);
	else
	{
		while (var <= n)
		{
			if (((char*)s)[var] == '\0')
				return (NULL);
			else if (((char*)s)[var] == c)
				return (&((char*)s)[var]);
			else
				var++;
		}
	}
	return (NULL);
}
