/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 15:17:41 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 18:23:58 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int var;
	var = 0;

	if(dst[var] == '\0' || src[var] == '\0')
		return(dst);
	while(dst[var+1] != '\0' || src[var+1] != '\0')
	{
		while(var <= len)
		{
			dst[var] = src[var];
			var++;
		}
	}
	dst[var] ='\0';
	return(dst);
}
