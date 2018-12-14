/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:19:06 by maginist          #+#    #+#             */
/*   Updated: 2018/11/22 10:51:59 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		count1;
	char	*str;

	i = -1;
	j = -1;
	if (s1 && s2)
	{
		count1 = ft_strlen((char*)s1) + ft_strlen((char*)s2);
		if (!(str = (char*)malloc(sizeof(char) * (count1 + 1))))
			return (NULL);
		while (s1[++i])
			str[i] = s1[i];
		while (s2[++j])
		{
			str[i] = s2[j];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
