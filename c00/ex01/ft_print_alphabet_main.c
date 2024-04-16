/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcgozlu <huseyincelalgozlu@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 23:26:44 by hcgozlu           #+#    #+#             */
/*   Updated: 2024/04/16 23:26:44 by hcgozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet (void)
{
	char	 c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		 c++;
	}
}
int	main()
{
	ft_print_alphabet();
	return (0);
}
