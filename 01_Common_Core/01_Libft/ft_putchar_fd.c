/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpico-bu <mpico-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:16:12 by mpico-bu          #+#    #+#             */
/*   Updated: 2024/12/15 21:16:12 by mpico-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Writes the character `c` to the file descriptor `fd`.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
