/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:26:43 by mjoundi           #+#    #+#             */
/*   Updated: 2024/06/15 20:28:07 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int value, size_t num)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < num)
	{
		str[i] = (char)value;
		i++;
	}
	return (s);
}
