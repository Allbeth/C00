/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarisanc <sarisanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 00:03:43 by sarisanc          #+#    #+#             */
/*   Updated: 2024/06/29 00:40:31 by sarisanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

int	main(void)
{
	char	c = 10;
	//write(1, &c, 1);
	printf("character:%d\n", c);
}
