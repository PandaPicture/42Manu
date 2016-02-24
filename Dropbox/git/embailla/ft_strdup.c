/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 16:07:06 by embailla          #+#    #+#             */
/*   Updated: 2016/02/24 19:40:59 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char		*ft_strdup(const char *s1)
{
	int		var;
	int		var2;
	char	*str;

	var = 0;
	while (s1[var] != '\0')
		var++;
	var2 = 0;
	str = malloc(sizeof(char) * var);
	if (str == NULL)
		return (NULL);
	while (s1[var2] != '\0')
	{
		str[var2] = s1[var2];
		var2++;
	}
	return (str);
}
