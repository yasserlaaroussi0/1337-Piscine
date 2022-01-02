/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:05:03 by ylaarous          #+#    #+#             */
/*   Updated: 2021/08/14 10:29:20 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if ((f == 1) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32 ;
			else if (!(f) && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			f = 0;
		}
		else
		{
			f = 1;
		}
		i++;
	}
	return (str);
}
