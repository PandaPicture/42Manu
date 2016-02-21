/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 14:43:38 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 17:32:52 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int var;
	int var2;

	var = 0;
	var2 = ft_strlen(s);
	while (var <= var2)
	{
		(*f)(var, s);
		var++;
	}
	return;
}
