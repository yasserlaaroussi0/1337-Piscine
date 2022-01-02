/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 07:59:07 by ylaarous          #+#    #+#             */
/*   Updated: 2021/08/17 08:11:23 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned	int size)
{
	unsigned int	rst;
	unsigned int	s_dest;
	unsigned int	s_src;
	unsigned int	i;

	i = 0;
	s_src = 0;
	s_dest = 0;
	rst = 0;
	while (dest[s_dest])
		s_dest++;
	while (src[s_src])
		s_src++;
	if (s_dest >= size)
		rst = s_src + size;
	else
		rst = s_src + s_dest;
	while (src[i] && (s_dest + 1) < size)
	{
		dest[s_dest] = src[i];
		s_dest++;
		i++;
	}
	dest[s_dest] = '\0';
	return (rst);
}
