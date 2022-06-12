/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:04:15 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/11 21:27:23 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p_s;

	p_s = (unsigned char *) s;
	while(n--)
	{
		if (*p_s == (unsigned char) c)
			return p_s;
		p_s++;
	}
	return (0);
}
