/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:14:49 by rbeach            #+#    #+#             */
/*   Updated: 2020/07/30 12:13:19 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if ((newstr = malloc(ft_strlen(s) + 1)))
	{
		while (s[i])
		{
			newstr[i] = s[i];
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
