/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:54:40 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/19 21:02:30 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*p_substr;
	char	*p_s;

	substr = ft_calloc(len, sizeof(char));
	if (!substr)
		return (0);
	p_s = (char *) s + start;
	p_substr = substr;
	while (*p_s)
		*p_substr++ = *p_s++;
	return (substr);
}
