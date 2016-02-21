/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 18:58:11 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 18:25:29 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int var;
	int var2;
	int var3;

	var = 0;
	var2 = ft_strlen(s1);
	var3 = ft_strlen(s2);
	while (var >= var2 && var <= var3 && var <= n)
	{
		if (s1[var] == s2[var])
			var++;
		else
			return (0);
	}
	return (1);
}
