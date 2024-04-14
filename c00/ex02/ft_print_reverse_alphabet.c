/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcgozlu <huseyincelalgozlu@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:33:42 by hcgozlu           #+#    #+#             */
/*   Updated: 2024/04/14 23:33:42 by hcgozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	 c;

	c = 'z';
	while (c >= 'a')
	{
		write (1, &c, 1);
		 c--;
	}
}
