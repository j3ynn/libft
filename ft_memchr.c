/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:23:47 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/11 11:19:04 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int j, size_t n)
{
	unsigned char		*str;
	int					p;

	str = (unsigned char *)s;
	p = 0;
	while (str[p] != '\0' && p < n)
	{
		if (str[p] == (unsigned char)j)
		{
			return ((void *)&str[p]);
		}
		p ++;
	}
	return (NULL);
}
/*int main ()
{
	printf("%s\n", (char *)ft_memchr("patrizio",'z',10));
}*/
