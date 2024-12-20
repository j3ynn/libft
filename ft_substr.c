/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:08:54 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/19 13:03:48 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	p;

	s2 = (char *)malloc(sizeof(char) * (len + 1));
	p = 0;
	if (!s || !s2)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	while (len)
	{
		s2[p++] = s[start++];
		len --;
	}
	s2[p] = '\0';
	return (s2);
}
/*int main (int argc, char **argv)
{
	printf("%s\n", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
}*/
