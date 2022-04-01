/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:47:35 by harndt            #+#    #+#             */
/*   Updated: 2022/04/01 17:27:10 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


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
		ptr = (char *) malloc (len *(sizeof(char)));
		while (i <= len)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
