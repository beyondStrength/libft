/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:10:00 by iuturano          #+#    #+#             */
/*   Updated: 2022/05/10 22:55:18 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void *ft_memcpy(void *restrict dst, const void* src, int n)
{
	int		i;
	int		dst_len;
	char	*dst_bak;

	dst_len = (ft_strlen(dst));
	dst_bak = (char *) malloc(dst_len * sizeof(dst[0]));

	i = 0;
	while (i < dst_len)
	{
		(dst_bak)[i] = ((char*) dst)[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (dst_bak);
}

#include <stdio.h>
int main(void)
{
	char hello[] = "hello";
	char not_hello[10] = "world";
	printf("%s\n%s\n%s", ft_memcpy(not_hello, hello, 6), hello, not_hello);
}
