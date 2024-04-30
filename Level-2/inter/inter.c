/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:41:26 by crebelo-          #+#    #+#             */
/*   Updated: 2023/09/05 14:41:26 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_doubles(char	*str, char c, int n)
{
	int	i = 0;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int	i = 0;
	int	j;
	while (argv[1][i] != '\0')
	{
		j = 0;
		if (check_doubles(argv[1], argv[1][i], i) == 0)
		{
			if(argv[1][i] == '\0')
				break ;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
					break ;
				}	
				j++;
			}
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}