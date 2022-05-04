/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:59:21 by iuturano          #+#    #+#             */
/*   Updated: 2022/05/03 20:46:04 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c < '0' || c > '9')
        return (0);
    return (1);
}