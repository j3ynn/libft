/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:00:57 by jbellucc          #+#    #+#             */
/*   Updated: 2024/12/11 11:31:13 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int p)
{
	if (p >= 48 && p <= 57 || p >= 65 && p <= 90 || p >= 97 && p <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}