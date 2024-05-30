/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:43:52 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/29 21:44:58 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
//#include "ft_lstnew_bonus.c"
//#include "ft_lstlast_bonus.c"
//#include "ft_lstadd_front_bonus.c"
//#include "ft_lstdelone_bonus.c"
//#include "ft_lstclear_bonus.c"
//#include "ft_lstadd_back_bonus.c"
//#include "ft_lstsize_bonus.c"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!f || !lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/*
#include <ctype.h>
#include <string.h>
void *to_uppercase(void *content)
{
	char *str = (char *)content;
	char *new_str = strdup(str);

	if (!new_str)
		return NULL;

	for (int i = 0; new_str[i]; i++)
	{
		new_str[i] = toupper(new_str[i]);
	}
	return new_str;
}*/
/*

#include "ft_toupper.c"
int main(void)
{
	t_list *head;
	t_list *new_list;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *current;

	// Create initial list
	head = ft_lstnew(strdup("first node"));
	node1 = ft_lstnew(strdup("second node"));
	node2 = ft_lstnew(strdup("third node"));
	node3 = ft_lstnew(strdup("fourth node"));

	// Link nodes
	head->next = node1;
	node1->next = node2;
	node2->next = node3;




	// Apply ft_lstmap
	new_list = ft_lstmap(head, to_uppercase, del);

	// Print the new list
	printf("Mapped list:\n");
	current = new_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	printf("size is : %d", ft_lstsize(new_list));
	return 0;
}
*/
