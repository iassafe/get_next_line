/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iassafe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:24:02 by iassafe           #+#    #+#             */
/*   Updated: 2022/12/24 17:40:26 by iassafe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s || !(*s))
		return (NULL);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	if (!left_str)
	{
		left_str = malloc(1);
		left_str[0] = '\0';
	}
	if(!left_str)
		return(NULL);
	result = malloc(ft_strlen(left_str) + ft_strlen(buff) + 1);
	if (!result)
		return (NULL);
	while (left_str[i] != '\0')
	{
		result[i] = left_str[i];
		i++;
	}
	while (buff[j] != '\0')
		result[i++] = buff[j++];
	result[i] = '\0';
	free(left_str);
	return (result);
}
 