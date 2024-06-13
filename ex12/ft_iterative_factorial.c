/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:36:53 by parmando          #+#    #+#             */
/*   Updated: 2024/05/06 11:37:02 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	iterator;

	iterator = nb - 1;
	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			nb = 1;
		else
		{
			while (iterator >= 1)
			{
				nb *= iterator;
				iterator--;
			}
		}
	}
	else
		return (0);
	return (nb);
}
