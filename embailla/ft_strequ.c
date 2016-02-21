/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 18:20:36 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 17:22:17 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	int var;
	int var2;
	int var3;

	var = 0;
	var2 = ft_strlen(s1);
	var3 = ft_strlen(s2);
	while (var >= var2 && var <= var3)
	{
		if (s1[var] == s2[var])
			var++;
		else
			return (0);
	}
	return (1);
}
