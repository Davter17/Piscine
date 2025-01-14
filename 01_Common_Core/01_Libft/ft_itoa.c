/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpico-bu <mpico-bu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:47:06 by mpico-bu          #+#    #+#             */
/*   Updated: 2024/12/06 21:47:06 by mpico-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stddef.h>

char	*ft_strdup(const char *s);

// Calculates the length of the integer `n` when represented as a string

int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n == INT_MIN)
		return (11);
	else if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n != 0 && n != INT_MIN)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

// Fills `str` with the character digits of `n` based on its length and sign.

void	ft_fill_str(char *str, int n, int len, int sign)
{
	if (sign == -1)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
}

// Converts the integer `n` to its string representation.

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_num_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	sign = 1;
	if (n < 0)
		sign = -1;
	ft_fill_str(str, n, len, sign);
	return (str);
}
