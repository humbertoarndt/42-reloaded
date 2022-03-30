/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:50:27 by harndt            #+#    #+#             */
/*   Updated: 2022/03/30 14:45:55 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*ptr;

	if (min >= max)
		return (ptr = NULL);
	i = 0;
	len = max - min;
	ptr = (int *) malloc (len *(sizeof(int)));
	while (min < max)
		ptr[i++] = min++;
	ptr[i] = '\0';
	return (ptr);
}
