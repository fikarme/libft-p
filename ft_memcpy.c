/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:58 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/09 20:41:59 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*td;
	char	*ts;

	if (!dst && !src)
		return (NULL);
	i = 0;
	td = (char *)dst;
	ts = (char *)src;
	while (i < n)
	{
		td[i] = ts[i];
		i++;
	}
	return (dst);
}
