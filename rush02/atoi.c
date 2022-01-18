/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:35:43 by omartine          #+#    #+#             */
/*   Updated: 2021/07/10 17:42:51 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{	
	int	s;
	int	n;

	s = 1;
	n = 0;
	while (is_space(*str))
		str++;
	while (*str == '-' | *str == '+')
	{
		if (*str == '-')
			s = -s;
		str++;
	}
	while (*str != '\0' )
	{
		if (*str >= '0' && *str <= '9')
			n = n * 10 + *str - '0';
		else
			return (s * n);
		str++;
	}
	return (s * n);
}

int main()
{
	char *str;

	str = "  ---+---++-564237";
	printf( "%d\n", ft_atoi(str));
}
