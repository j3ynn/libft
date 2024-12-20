/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:40:14 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/11 17:55:48 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	p;
	int	p2;

	p = 0;
	p2 = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[p] != '\0' && p < len)
	{
		if (haystack[p] == needle[p2])
		{
			while (haystack[p + p2] == needle[p2] && p + p2 < len)
			{
				if (needle[p2 + 1] == '\0')
					return ((char *)&haystack[p]);
				p2 ++;
			}
			p2 = 0;
		}
		p ++;
	}
	return (NULL);
}
/*int main()
{
	printf("%p\n", ft_strnstr("cazzo", "azzo", 2));
}*/
