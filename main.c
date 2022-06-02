/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:40:58 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/02 20:43:22 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	//MEMCPY
	printf("\nmemcp
	y:\n");
	char str[] = "works!!!";
	char cpy[50] = "";
	ft_memcpy(cpy, str, 14);
	if (cpy[0] == 'w')
		printf("%s\n", cpy);
	else
		printf("doens't work. :c\n");

}
