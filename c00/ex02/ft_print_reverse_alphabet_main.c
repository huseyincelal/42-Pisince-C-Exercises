/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_main.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcgozlu <huseyincelalgozlu@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:27:04 by hcgozlu           #+#    #+#             */
/*   Updated: 2024/04/16 23:27:04 by hcgozlu          ###   ########.fr       */
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

int	main()
{
	ft_print_reverse_alphabet();
}
