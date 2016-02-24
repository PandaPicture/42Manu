/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 12:57:38 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:36:07 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		index;
	size_t	var;

	if (!s)
		return (NULL);
	index = 0;
	var = 0;
	str = ft_strnew(ft_strlen(s));
	while (var < ft_strlen(s))
	{
		if (!index && ft_isspace(s[var]))
			var++;
		else
			str[index++] = s[var++];
	}
	while (ft_isspace(str[--index]))
		str[index] = '\0';
	return (str);
}
