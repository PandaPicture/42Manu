/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 12:57:38 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:20:57 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s)
{
	char	*str;
	int		var;
	int		var2;

	var2 = 0;
	var = ft_strlen(s);
	str = (char*) malloc((var + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[var] != '\0')
	{
		while (s[var] == ' ' || s[var] == ',' || s[var] == '\n' || s[var] == '\t')
			var++;
		str[var2] = s[var];
		var++;
		var2++;
	}
	while (str[var2] == ' ' || str[var2] == ',' || str[var2] == '\n' || str[var2] == '\t')
	{
		str[var2] = '\0';
		var2--;
	}
	return (str);
}
