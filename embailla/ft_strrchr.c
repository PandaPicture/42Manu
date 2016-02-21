/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 19:09:37 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:12:18 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int var;
	int var2;
	int var3;
	var = 0;
	var3 = 0;

	while(s[var] != '\0')
	{
		if(s[var] == c && c != '\0')
		{
			var2 = var;
			var3 = 1;
		}	
		var++;
	}
	if(c == '\0')
	{
		var++;
		return(&((char*)s)[var]);
	}
	else if(var3 == 1)
	{
		var = var2;
		return(&((char*)s)[var]);
	}
	else
		return(NULL);
}
