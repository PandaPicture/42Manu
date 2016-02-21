/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 17:42:38 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 18:19:01 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int var;
	int var2;

	var = 0;
	var2 = 0;
	while (s1[var] != '\0' && s2[var] != '\0' && var <= n)
	{
		if (s1[var] == s2[var])
			var++;
		else
		{
			var2 = var2 + (s1[var] - s2[var]);
			var++;
		}
	}
	return (var2);
}
