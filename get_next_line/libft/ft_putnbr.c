/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:25:51 by maginist          #+#    #+#             */
/*   Updated: 2018/11/14 10:33:41 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int k;

	if (n < 0)
	{
		ft_putchar('-');
		k = -n;
	}
	else
		k = n;
	if (k >= 10)
		ft_putnbr(k / 10);
	ft_putchar(k % 10 + '0');
}
