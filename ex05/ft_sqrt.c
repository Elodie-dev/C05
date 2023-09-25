/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:59:39 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/25 13:58:19 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	j;
	long	n;

	i = 1;
	j = 0;
	n = nb;
	while (n > 0)
	{
		n = n - i;
		i += 2;
		j++;
	}
	if (n == 0)
		return (j);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(100));
}*/