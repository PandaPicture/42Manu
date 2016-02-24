/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 14:52:21 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:42:15 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int var;

	var = 0;
	while (dst[var] != '\0' || src[var] != '\0')
	{
		dst[var] = src[var];
		var++;
	}
	dst[var] = '\0';
	return (dst);
}
