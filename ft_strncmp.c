/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:10:09 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/10 10:38:28 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	p;

	p = 0;
	while ((str1[p] || str2[p]) && p < n)
	{
		if (str1[p] != str2[p])
			return (str1[p] - str2[p]);
		p ++;
	}
	return (0);
}
/*int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d,\n", ft_strncmp(argv[1], argv[2], 7));
		printf("%d", strncmp(argv[1], argv[2], 7));
	}
}*/
