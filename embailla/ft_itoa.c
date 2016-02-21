/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 14:59:40 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 13:23:51 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		var;
	int		var2;
	int		var3;

	var2 = n;
	var = n < 1 ? 1 : 0;
	while (n /= 10)
		var++;
	str = (char*)malloc((var + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	n = var2;
	var2 = 0;
	while (var2++ <= var)
		var3 = var3 * 10;
	var = 0;
	while (var3 /= 10)
	{
		str[var] = ((n / var3) + '0');
		var++;
	}
	str[var] = '\0';
	return (str);
}
