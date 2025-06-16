/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:25:19 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/16 15:00:29 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void dummy_free(void *content)
{
    (void)content;
}

int	main(void)
{
    t_list	*old = NULL;
    t_list	*new;
    t_list	*new2;
	t_list	*new3;
    char	*a = "Ardovski";
    char	*b = "Umut";
	char	*c = "Naber";
	
    new = ft_lstnew(a);
    printf("%s\n", (char *)new->content);
    new2 = ft_lstnew(b);
    ft_lstadd_front(&old,new);
    printf("%s\n", (char *)old->content);
    ft_lstadd_front(&old,new2);
    printf("%s\n", (char *)old->content);
    printf("%s\n", (char *)old->next->content);
    printf("%d\n", ft_lstsize(old));
    printf("%s\n", (char *)ft_lstlast(old)->content);
	new3 = ft_lstnew(c);
    ft_lstadd_back(&old,new3);
    printf("%s\n",(char *)ft_lstlast(old)->content);

	ft_lstclear(&old,dummy_free);
	// ft_lstdelone(ft_lstlast(old), dummy_free);
    // printf("%s\n",(char *)ft_lstlast(old)->content);
}
