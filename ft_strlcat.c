/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:42:20 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/10 13:56:27 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	p;
	size_t	p2;
	size_t	src_size;

	p = 0;
	p2 = 0;
	src_size = ft_strlen(src);
	while (dest[p] != '\0' && p < size)
		p ++;
	while (src[p2] != '\0' && (p + p2 + 1) < size)
	{
		dest[p + p2] = src[p2];
		p2 ++;
	}
	if (p < size)
		dest[p + p2] = '\0';
	return (p + src_size);
}
/*int main(int argc, char **argv)
{
	printf("%li\n", ft_strlcat(argv[1],argv[2],15));
}*/
