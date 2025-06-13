/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:50:27 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/12 14:39:05 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*dest;

	dest = b;
	i = 0;
	while (i < len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
