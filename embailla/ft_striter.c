/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 14:33:43 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 17:27:57 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int var;

	var = 0;
	while (s[var] != '\0')
	{
		f(&(s)[var]);
		var++;
	}
	return;
}