/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoip.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:52:42 by omartine          #+#    #+#             */
/*   Updated: 2021/07/10 19:55:04 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_chrin(int div, int in, int i, char *str)
{
	int num;

	while(in != i)
	{
		num = (str[in] - '0') * div;
		div = div / 10;
	}
	return (num);
}

int	ft_div(int in, int i)
{
	int	aux;
	int	n;
	int div;

	n = 1;
	div = 1;
	aux = i - in;
	while (n != aux)
	{
		div = div * 10;
		n++;
	}
	return (div);
}

int	ft_spc(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int i;
	int simbol;
	int	in;
	int	div;
	int	num;

	simbol = -1;
	i = 0;
	i = ft_spc(i, str);
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			simbol = simbol * -1;
		in = i++;
	}
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		i++;
	div = ft_div(in, i);
	num = ft_chrin(div, in , i, str);
	num = num * simbol;
	return (num);
}

int	main(int argc, char *argv[])
{
	int	num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		printf("%d", num);
	}
	else
		write(1, &"Error", 5);
	write(1, &"\n", 1);
}
		
