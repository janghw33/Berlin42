/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:43:52 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/29 21:45:28 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstnew_bonus.c"
//#include "ft_lstlast_bonus.c"
//#include "ft_lstadd_front_bonus.c"
//#include "ft_lstdelone_bonus.c"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
/*
void del(void *content)
{
	free(content);
}*/
/*

#include <string.h>
int main(void)
{
	t_list *head;
	t_list *new_node1;
	t_list *new_node2;
	t_list *new_node3;
	char *content1;
	char *content2;
	char *content3;

	// Create contents
	content1 = strdup("Node 1");
	content2 = strdup("Node 2");
	content3 = strdup("Node 3");

	// Create nodes
	head = ft_lstnew(content1);
	new_node1 = ft_lstnew(content2);
	new_node2 = ft_lstnew(content3);

	// Link nodes
	head->next = new_node1;
	new_node1->next = new_node2;

	// Print the list before clearing
	t_list *current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&head, del);

	if (head == NULL)
		printf("List has been cleared.\n");
	else
		printf("List has not been cleared properly.\n");

	return 0;
}*/
