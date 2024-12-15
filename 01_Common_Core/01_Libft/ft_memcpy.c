/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpico-bu <mpico-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:19:14 by mpico-bu          #+#    #+#             */
/*   Updated: 2024/12/04 18:19:14 by mpico-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_2;
	const unsigned char	*src_2;
	size_t				i;

	dest_2 = (unsigned char *)dest;
	src_2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_2[i] = src_2[i];
		i++;
	}
	return (dest);
}