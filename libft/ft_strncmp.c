/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:04:15 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/21 18:51:33 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while ((*p1 != '\0' || *p2 != '\0') && n != 0)
	{
		if (*p1 > *p2)
			return (1);
		if (*p1 < *p2)
			return (-1);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
