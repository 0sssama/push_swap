/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:45:14 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/10 16:52:07 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_exists(int ac, char **av, char *num, int index)
{
	int	i;
	int	n;

	i = 1;
	n = ft_atoi(num);
	while (i < ac)
	{
		if (i == index)
		{
			i++;
			continue ;
		}
		if (ft_atoi(av[i]) == n)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isstring(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 0)
		return (1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			if (str[i] == '-' && i == 0)
			{
				i++;
				continue ;
			}
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_strings(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_isstring(av[i++]))
			return (1);
	}
	return (0);
}

int	ft_check_edge(int ac, char **av)
{
	long long	given;
	int			i;

	i = 1;
	while (i < ac)
	{
		given = ft_atoi(av[i++]);
		if (given > (long long) 2147483647 || given < (long long) -2147483648)
			return (1);
	}
	return (0);
}

int	ft_check_duplicates(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_exists(ac, av, av[i], i))
			return (1);
		i++;
	}
	return (0);
}
