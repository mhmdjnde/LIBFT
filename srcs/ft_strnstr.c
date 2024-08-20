/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:36:05 by mjoundi           #+#    #+#             */
/*   Updated: 2024/06/15 20:30:04 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*str1;
	char	*str2;
	size_t	j;

	i = 0;
	str1 = (char *)big;
	str2 = (char *)little;
	if (str2[0] == '\0')
		return (str1);
	while (i < len && str1[i] != '\0')
	{
		if (str1[i] == str2[0])
		{
			j = 0;
			while (i + j < len && str1[i + j] == str2[j])
			{
				j++;
				if (str2[j] == '\0')
					return (str1 + i);
			}
		}
		i++;
	}
	return (NULL);
}
