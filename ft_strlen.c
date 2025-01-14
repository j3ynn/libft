/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: je <je@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:49:22 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/10 10:27:10 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	p;

	p = 0;
	while (str[p] != '\0')
	{
		p ++;
	}
	return (p);
}
