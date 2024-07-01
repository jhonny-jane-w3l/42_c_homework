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

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (str2[0] == '\0')
	{
		return (0);
	}
	while ((str1[i] != '\0' || str2[i] != '\0') && str1[i] == str2[i] && i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

// int main()
// {
//     char *s1 = "Hellow";
//     char *s2 = "Hellowa";
//     unsigned int n;
//     n = 8;
//     printf("%d\n", ft_strncmp(s1, s2, n));
//     return 0;
// }
