/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 18:37:24 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 17:04:44 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int var;

	var = 0;
	while(s[var] != '\0')
	{
		if(s[var] == c)
			return(&((char*)s)[var]);
		else
			var++;
	}
	if(c == '\0')
	{
		var++;
		return(&((char*)s)[var]);
	}
	else
		return(NULL);
}
