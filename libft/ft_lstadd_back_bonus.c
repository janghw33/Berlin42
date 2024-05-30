/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:43:52 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/29 21:11:33 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstnew_bonus.c"
//#include "ft_lstlast_bonus.c"
//#include "ft_lstadd_front_bonus.c"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}

/*int main(void)
{
	t_list *head;
	t_list *new_node1;
	t_list *new_node2;
	t_list *current;

	head = ft_lstnew("First Node");
	new_node1 = ft_lstnew("Second Node");
	ft_lstadd_back(&head, new_node1);
	new_node2 = ft_lstnew("Third Node");
	ft_lstadd_front(&head, new_node2);

	current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}*/