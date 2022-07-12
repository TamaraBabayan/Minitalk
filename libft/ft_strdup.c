/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:35:37 by tbabayan          #+#    #+#             */
/*   Updated: 2022/04/22 17:41:23 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s;
	char	*s2;

	len = 0;
	while (s1[len])
		len++;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (0);
	s2 = s;
	len = 0;
	while (s1[len] != '\0')
	{
		s2[len] = s1[len];
		len++;
	}
	s2[len] = '\0';
	return (s);
}
