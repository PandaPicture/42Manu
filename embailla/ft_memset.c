/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:08:33 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:50:30 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int var;
	var = 0;

	if (((char*)b)[var] == '\0')
		return (0);
	else
	{
		while (var <= len)
		{
			if (((char*)b)[var] == '\0')
				return (0);
			else
			{
				((char*)b)[var] = c;
				var++;
			}
		}
	}
	return (&((char*)b)[0]);
}
