/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtse <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 11:41:22 by dtse              #+#    #+#             */
/*   Updated: 2016/07/13 11:41:57 by dtse             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_print_reverse_alphabet(void) {
	int i;

	i = 'z';
	while (i >= 'a') {
		ft_putchar(i);
		i--;
	}
}