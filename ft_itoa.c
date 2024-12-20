/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:57:06 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/20 14:26:40 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count ++;
	}
	while (n > 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*c;
	char	*start;
	int		count;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	count = count_digits(n);
	c = (char *)malloc(sizeof(char) + (count + 1));
	start = c;
	if (n < 0)
	{
		n = n * -1;
		*c = '-';
	}
	c += count;
	*c = '\0';
	while (n > 0)
	{
		c --;
		*c = (n % 10) + '0';
		n = n / 10;
	}
	return (start);
}
/*int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-13320));
	printf("%s\n", ft_itoa(10239810));
}*/
