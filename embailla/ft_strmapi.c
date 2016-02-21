/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 17:48:02 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 18:14:40 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int var;
	int var2;
	char *str;

	var = 0;
	var2 = ft_strlen(s);
	str = (char*) malloc(var2 * sizeof(char));
	while (var <= var2)
	{
		str[var] = (*f)(var, s[var]);
		var++;
	}
	str[var] = '\0';
	return (str);
}
