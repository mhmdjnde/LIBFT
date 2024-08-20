/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:14:49 by mjoundi           #+#    #+#             */
/*   Updated: 2024/06/15 20:28:02 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char		*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = (char *)dest;
	str2 = (const char *)src;
	while (i < num)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
