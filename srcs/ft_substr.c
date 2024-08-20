/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoundi <mjoundi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:50:05 by mjoundi           #+#    #+#             */
/*   Updated: 2024/06/15 20:38:32 by mjoundi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static unsigned int	ft_strlenn(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*allocation(char *substr)
{
	char	*str;

	str = substr;
	str = (char *)malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	unsigned int		i;
	unsigned int		j;
	unsigned int		lenn;

	i = start;
	j = 0;
	substr = "";
	lenn = (unsigned int)len;
	if (start >= ft_strlenn(s))
		return (allocation(substr));
	if (ft_strlenn(s) - start < lenn)
		substr = (char *)malloc((ft_strlenn(s) - start + 1) * sizeof(char));
	else
		substr = (char *)malloc((lenn + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (j < lenn && s[i] != '\0')
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
