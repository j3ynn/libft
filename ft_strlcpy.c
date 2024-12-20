/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:42:56 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/17 15:30:40 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		len;
	size_t	p;

	p = 0;
	len = ft_strlen(src);
	while (src[p] != '\0' && p < size - 1)
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (len);
}
/*int main(int argc, char **argv)
{
	printf("%zu\n", ft_strlcpy(argv[1],argv[2], 14));
}*/