/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 18:48:11 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 19:21:30 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if (c >= 101 && c <= 132)
		c = c - 'A' + 'a';
	return (c);
}
