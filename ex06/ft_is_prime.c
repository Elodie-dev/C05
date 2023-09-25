/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:59:25 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/25 15:37:06 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;
	long	n;

	i = 1;
	n = nb;
	if ((n < 2 || n % 2 == 0) && n != 2)
		return (0);
	while (i * i < n && i <= 46430)
	{
		i += 2;
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(2557));
}*/