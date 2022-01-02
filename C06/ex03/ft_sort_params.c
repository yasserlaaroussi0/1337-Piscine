/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:40:24 by ylaarous          #+#    #+#             */
/*   Updated: 2021/08/21 17:40:27 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_parameters(int	ac, char	**av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	swap(char	**a, char	**b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int	ac, char	**av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (i < ac - 1)
		{
			j = i + 1;
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				swap(&av[i], &av[j]);
				i = 0;
			}
			i++;
		}
		print_parameters(ac, av);
	}
}
