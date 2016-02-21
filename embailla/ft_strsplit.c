/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 13:05:15 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:14:40 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	char	**str;
	int		var;
	int		var2;
	int		var3;

	var3 = 0;
	var = ft_strlen(s);
	str = (char**) malloc((var + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[var2] != '\0')
	{
		while (s[var2] == c && s[var2] != '\0')
			var2++;
		var = 0;
		while (s[var2] != c && s[var2] != '\0')
		{
			str[var3][var] = s[var2];
			var++;
			var2++;
		}
		str[var3][var] = '\0';
		var3++;
	}
	return (str);
}
