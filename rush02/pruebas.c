/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:08:32 by omartine          #+#    #+#             */
/*   Updated: 2021/07/10 19:55:28 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_2(char *str)
{
	printf("%s\n", str);
}

void	ft_ft(char *str)
{
	printf("%s\n", str);
	ft_2(str);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_ft(argv[1]);
	else
		write(1, &"Error", 5);
}
