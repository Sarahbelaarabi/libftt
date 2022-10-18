/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabelaar <sabelaar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:04:26 by sabelaar          #+#    #+#             */
/*   Updated: 2022/10/18 08:30:07 by sabelaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int	nbr;
	int	i;

	i = 0;
	neg = 1;
	nbr = 0;
    while (str[i] == '\t' || str[i] == '\n' ||
        str[i] == '\v' || str[i] == '\f' || str[i] == '\r' ||
        str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (str[i] - '0') + (nbr * 10);
		i++;
	}
	return (nbr * neg);
}
