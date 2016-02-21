/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embailla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 12:37:31 by embailla          #+#    #+#             */
/*   Updated: 2016/02/21 17:59:08 by embailla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	char	*ptr;
	char	*ptr2;
	size_t	len;
	size_t	len2;

	*ptr = *dst;
	*ptr2 = *src;
	len = size;
	while (len > 0 && *ptr != '\0')
	{
		ptr++;
		len--;
	}
	len2 = ptr - dst;
	len = size - len2;
	if (len == 0)
		return (len2 + ft_strlen(ptr2));
	while (*ptr2 != '\0')
	{
		if (len > 1)
		{
			*ptr = *ptr2;
			ptr++;
			len--;
		}
		ptr2++;
	}
	*ptr = '\0';
	return (len2 + (ptr2 - src));
}
