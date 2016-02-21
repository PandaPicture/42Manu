/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 13:09:29 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:10:37 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int var;
	int var2;
	int var3;
	int var4;

	var = 0;
	var2 = 0;
	if(little[var2] == '\0')
		return(&((char*)big)[var]);
	while(big[var] != '\0')
	{
		if(big[var] == little[var2])
		{
			while(big[var] == little[var2] && var3 != 1)
			{
				var++;
				var2++;
				if(var2 == len)
				{
					var3 = 1;
					var4 = var - var2;
				}
			}
		}
		var2 = 0;
		var++;
	}
	if(var3 == 1)
		return(&((char*)big)[var4]);
	else
		return(NULL);
}
