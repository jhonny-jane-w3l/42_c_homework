/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:50:25 by pjolidon          #+#    #+#             */
/*   Updated: 2024/06/30 02:46:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *strd1, char *strs2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (strd1[i] != '\0')
	{
		i++;
	}
	while (strs2[j] != '\0')
	{
		strd1[i] = strs2[j];
		j++;
		i++;
	}
	strd1[i] = '\0';
	return (strd1);
}
// int main()
// {
// 	char src[] = "world! ";
// 	char dest[20] = "Hello ";
// 	char *s1 = src;
// 	char *d2 = dest;

// 	ft_strcat(d2, s1);
// 	return 0;
// }