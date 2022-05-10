/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:50:14 by iuturano          #+#    #+#             */
/*   Updated: 2022/05/10 20:23:12 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char) c;
		i++;
	}
	return (b);
}


#include <stdio.h>
int main(void)
{
	char hello[12] = "hello world\0";

	printf("\nbefore memset: %s\n", hello);
	ft_memset(&hello[1], 97, 3);
	printf("\nafter memset: %s\n", hello);
}
