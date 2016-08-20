/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 21:50:31 by dtse              #+#    #+#             */
/*   Updated: 2016/07/27 21:50:33 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list = begin_list;
	while (list)
	{
		(*f)(list_ptr->data);
		list = list->next;
	}
}