/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:55:31 by ylaarous          #+#    #+#             */
/*   Updated: 2021/08/23 10:26:06 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		return (-1);
	if ((index == 0) || (index == 1))
		return (index);
	fib = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (fib);
}
