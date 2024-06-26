/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:39:12 by parmando          #+#    #+#             */
/*   Updated: 2024/05/06 11:39:18 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	a;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	a = 1;
	while (a <= nb / 2 && a <= 46341)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}
