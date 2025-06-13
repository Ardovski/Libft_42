/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:25:19 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/13 18:08:09 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static void d(void *content)
{
	if(content)
	{
		free(content);
		printf("FREELENDI");
	}
}

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// del_string burada yukarıda tanımlandı
void	listeyi_yazdir(t_list *lst)
{
	printf("Liste içeriği:\n");
	while (lst)
	{
		printf("- %s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	// Veriler
	char *veri1 = strdup("Arda");
	char *veri2 = strdup("PLC");
	char *veri3 = strdup("Robotik");

	// Düğümler
	t_list *n1 = ft_lstnew(veri1);
	t_list *n2 = ft_lstnew(veri2);
	t_list *n3 = ft_lstnew(veri3);

	// Listeyi oluştur: Arda -> PLC -> Robotik
	n1->next = n2;
	n2->next = n3;
	t_list *liste = n1;

	// Önceki hâlini yazdır
	printf("Silmeden önce:\n");
	listeyi_yazdir(liste);

	// PLC düğümünü (n2) silelim
	n1->next = n3; // Aradaki bağlantıyı atla
	ft_lstdelone(n2, d);

	// Sonraki hâlini yazdır
	printf("\nSildikten sonra:\n");
	listeyi_yazdir(liste);

	// Temizlik
	ft_lstdelone(n1, d);
	ft_lstdelone(n3, d);

	return 0;
}


