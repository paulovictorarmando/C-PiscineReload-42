/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 06:47:51 by parmando          #+#    #+#             */
/*   Updated: 2024/05/16 07:11:10 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	index;
	int	one_numbs;

	index = 0;
	one_numbs = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			one_numbs++;
		index++;
	}
	return (one_numbs);
}
