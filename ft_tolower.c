/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:56:47 by mmanyani          #+#    #+#             */
/*   Updated: 2024/10/29 09:57:50 by mmanyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	to_lower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*int main()
{
    printf("%c", to_lower(65));
}*/
