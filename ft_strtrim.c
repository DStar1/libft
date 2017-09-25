/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 19:11:57 by hasmith           #+#    #+#             */
/*   Updated: 2017/09/24 19:34:29 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Trims whitespace of beginging and end of string
*/

#include "libft.h"

int		ft_whitespaces(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		loop;
	int		i;
	char	*str;

	i = 0;
	start = 0;
	if (s == NULL)
		return (NULL);
	end = ft_strlen(s);
	while (ft_whitespaces(s[start]) == 1)
		start++;
	if (start == end)
		return ("");
	while (ft_whitespaces(s[end - 1]) == 1)
		end--;
	loop = end - start;
	str = ft_strnew(loop);
	if (str == NULL)
		return (NULL);
	while (i < loop)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
