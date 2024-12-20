/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:35:10 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/12 11:48:01 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			p;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	p = 0;
	if (!dest && !src)
		return (0);
	while (s[p] != '\0' && p < n)
	{
		d[p] = s[p];
		p ++;
	}
	return (dest);
}
/*int main ()
{
	char	dest[6];
	ft_memcpy(dest,"zoo",2);
	printf("%s\n", dest);
}*/
