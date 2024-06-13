/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:45:03 by parmando          #+#    #+#             */
/*   Updated: 2024/05/06 11:45:10 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	indexc;
	int	indexv;

	indexc = 1;
	while (indexc < argc)
	{
		indexv = 0;
		while (argv[indexc][indexv] != '\0')
		{	
			ft_putchar(argv[indexc][indexv]);
			indexv++;
		}
		ft_putchar('\n');
		indexc++;
	}
	return (0);
}
