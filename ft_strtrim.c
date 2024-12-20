/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:59:49 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/17 15:27:01 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*j;
	size_t	i;
	size_t	fs1;
	size_t	h;

	i = 0;
	h = 0;
	j = (char *)malloc(sizeof(char) * (fs1 - i + 1));
	fs1 = ft_strlen(s1);
	if (!s1 || !set || !j)
		return (NULL);
	while (ft_strchr(set, s1[i]) && i < fs1)
		i ++;
	while (ft_strchr(set, s1[fs1 - 1]) && fs1 > i)
		fs1 --;
	while (i < fs1)
		j[h++] = s1[i++];
	j[h] = 0;
	return (j);
}
/*int main ()
{
	printf ("%s\n", ft_strtrim("parinasola", "pari"));
}*/
