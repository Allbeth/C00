/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarisanc <sarisanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:03:43 by sarisanc          #+#    #+#             */
/*   Updated: 2024/06/29 22:05:48 by sarisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	char	c = 10;
	print("character:%d\n", c);
}*/
