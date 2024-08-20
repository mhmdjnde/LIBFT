/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:57:16 by mjoundi           #+#    #+#             */
/*   Updated: 2024/06/15 20:40:51 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	j = dlen;
	if (size == 0)
		return (slen);
	if (size <= dlen)
		return (size + slen);
	while (src[i] != '\0' && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (size <= dlen)
	{
		return (size + slen);
	}
	return (dlen + slen);
}
