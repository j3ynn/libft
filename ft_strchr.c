/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:30:04 by jbellucc          #+#    #+#             */
/*   Updated: 2024/11/25 14:30:20 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] == s)
		{
			return ((char *)(str + p));
		}
		p ++;
	}
	if (s == '\0')
	{
		return ((char *)(str + p));
	}
	else
	{
		return (0);
	}
}
/*int main(int argc, char **argv)
{
	int s = 's';
	printf("%s,\n", ft_strchr(argv[1], s));
}*/
