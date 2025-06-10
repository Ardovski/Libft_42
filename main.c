/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:25:19 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/10 17:03:05 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	int i = 0;
	char **a = ft_split("ardovski, ne var be, hayırdır gardes", ',');
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	

	
}