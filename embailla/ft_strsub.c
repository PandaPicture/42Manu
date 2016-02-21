/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 11:34:19 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:19:12 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		var;
	int		var2;
	char	*str;

	var = 0;
	var2 = len - start;
	while (var <= start)
		var++;
	str = (char*) malloc((var2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	var2 = 0;
	while (var <= len)
	{
		str[var2] = s[var];
		var++;
		var2++;
	}
	str[var2] = '\0';
	return (str);
}
