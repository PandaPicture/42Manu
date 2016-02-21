/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 16:35:03 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 17:06:22 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int var;
	int var2;
	
	var = 0;
	var2 = 0;
	while (s1[var] != '\0' && s2[var] != '\0')
	{
		if (s1[var] == s2[var])
			var++;
		else
		{
			var2 = var2 + (s1[var] - s2[var]);
			var++;
		}
	}
	return(var2);
}
