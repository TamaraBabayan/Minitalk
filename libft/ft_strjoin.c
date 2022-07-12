/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:44:34 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/19 18:17:47 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	char	*s;

	newstring = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if ((!s1 && !s2) || !newstring)
		return (NULL);
	s = newstring;
	while (*s1)
	{
		*newstring = *s1;
		newstring++;
		s1++;
	}
	while (*s2)
	{
		*newstring = *s2;
		newstring++;
		s2++;
	}
	*newstring = '\0';
	return (s);
}
