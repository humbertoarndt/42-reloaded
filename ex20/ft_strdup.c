/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:47:35 by harndt            #+#    #+#             */
/*   Updated: 2022/03/30 14:45:26 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i--);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*ptr;

	if (src != NULL)
	{
		i = 0;
		len = ft_strlen(src);
		ptr = (char *) malloc (len *(sizeof(int)));
		while (i <= len)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
