/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctiperci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 19:27:05 by ctiperci          #+#    #+#             */
/*   Updated: 2015/11/02 19:27:07 by ctiperci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		++i;
	while (n > 0 && s2[j])
	{
		s1[i] = s2[j];
		++j;
		++i;
		--n;
	}
	s1[i] = '\0';
	return (s1);
}
