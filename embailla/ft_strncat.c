/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 16:02:03 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 18:17:44 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int var;
	int var2;

	var = 0;
	var2 = 0;

	if(s1 == NULL && s2 == NULL)
		return(s1);
	while(s1[var] != '\0')
		var++;
	while(s2[var2] != '\0' && var2 <= n)
	{
		s1[var] = s2[var2];
		var++;
		var2++;
	}
	s1[var++] = '\0';
	return(s1);
}
