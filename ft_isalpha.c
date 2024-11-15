/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabelaar <sabelaar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:51:45 by sabelaar          #+#    #+#             */
/*   Updated: 2022/10/18 08:50:03 by sabelaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_isalpha(int c)
{
    return ((('a' <= c) && ('z' >= c)) || (('A' <= c) && ('Z' >= c)));
}
