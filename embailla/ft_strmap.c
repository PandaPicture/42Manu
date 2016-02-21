/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 16:09:20 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 18:08:13 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	int var;
	int var2;
	char *str;

	var = 0;
	var2 = ft_strlen(s);
	str = (char*) malloc(var2 * sizeof(char));
	while (var <= var2)
	{
		str[var] = (*f)(s[var]);
		var++;
	}
	str[var] = '\0';
	return (str);
}
