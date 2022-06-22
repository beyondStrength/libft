/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:05:20 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/19 21:14:27 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*p_join;

	join = ft_calloc(ft_strlen(s1) + ft_strlen(s2), sizeof(char));
	if (!join)
		return (0);
	p_join = join;
	while (*s1)
		*p_join++ = *s1++;
	while(*s2)
		*p_join++ = *s2++;
	return (join);
}
