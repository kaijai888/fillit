/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillreset2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 18:03:47 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/14 18:03:49 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_resetblock5(char **map, int x, int y, int code)
{
	if (code == 11)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x + 1] = '.';
		map[y + 1][x + 2] = '.';
	}
	else if (code == 12)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
	}
	else if (code == 13)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y][x + 2] = '.';
		map[y + 1][x + 2] = '.';
	}
}

void	ft_resetblock6(char **map, int x, int y, int code)
{
	if (code == 14)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x - 1] = '.';
		map[y + 1][x] = '.';
	}
	else if (code == 15)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x + 1] = '.';
		map[y + 2][x + 1] = '.';
	}
	else if (code == 16)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x + 1] = '.';
		map[y + 1][x + 2] = '.';
	}
}

void	ft_resetblock7(char **map, int x, int y, int code)
{
	if (code == 17)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x - 1] = '.';
		map[y + 2][x - 1] = '.';
	}
	else if (code == 18)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 3][x] = '.';
	}
	else if (code == 19)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y][x + 2] = '.';
		map[y][x + 3] = '.';
	}
}
