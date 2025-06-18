/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uozdes <uardaozdes@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:48:22 by uozdes            #+#    #+#             */
/*   Updated: 2025/06/18 13:48:22 by uozdes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	del(void	*a)
{
	(void)a;
}
int main()
{
	int b[] = {1,13,267,288,655};
	t_list *sa = NULL;
	t_list *new = ft_lstnew("Ardovski");
	t_list *new2 = ft_lstnew("Ervo");
	t_list *temp;

	ft_lstadd_back(&sa,new2);
	ft_lstadd_front(&sa,new);
	temp = sa;
	int i = 0;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	t_list *s = ft_lstlast(sa);
	ft_lstdelone(s,del);
	temp = sa;
	i = 0;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}
