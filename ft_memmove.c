/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:50:25 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/12 17:12:27 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				p;
	unsigned char	*cdest;
	unsigned char	*csrc;

	p = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!cdest || !csrc)
		return (0);
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		p = n -1;
		while (p >= 0)
		{
			cdest[p] = csrc[p];
			p --;
		}
	}
	return (dest);
}
/*int main ()
{
	char	src[]="porcaccialamiseria";
	char	dest[30];
	ft_memmove(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}*/
