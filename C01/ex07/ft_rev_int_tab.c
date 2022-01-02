/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:49:36 by ylaarous          #+#    #+#             */
/*   Updated: 2021/08/10 12:25:03 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	i;
	int	fin;
	int	temp;

	fin = size - 1;
	i = 0;
	while (i <= fin)
	{
		temp = tab[fin];
		tab[fin] = tab[i];
		tab[i] = temp;
		fin--;
		i++;
	}
}
