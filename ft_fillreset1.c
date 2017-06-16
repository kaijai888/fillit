/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillreset1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 18:03:43 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/14 18:03:44 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_resetblock(char **map, int x, int y, int code)
{
	if (code == 1)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x + 1] = '.';
	}
	else if (code >= 2 && code <= 4)
		ft_resetblock2(map, x, y, code);
	else if (code >= 5 && code <= 7)
		ft_resetblock3(map, x, y, code);
	else if (code >= 8 && code <= 10)
		ft_resetblock4(map, x, y, code);
	else if (code >= 11 && code <= 13)
		ft_resetblock5(map, x, y, code);
	else if (code >= 14 && code <= 16)
		ft_resetblock6(map, x, y, code);
	else if (code >= 17 && code <= 19)
		ft_resetblock7(map, x, y, code);
}

void	ft_resetblock2(char **map, int x, int y, int code)
{
	if (code == 2)
	{
		map[y][x] = '.';
		map[y + 1][x - 1] = '.';
		map[y + 1][x] = '.';
		map[y + 1][x + 1] = '.';
	}
	else if (code == 3)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 1][x + 1] = '.';
	}
	else if (code == 4)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y][x + 2] = '.';
		map[y + 1][x + 1] = '.';
	}
}

void	ft_resetblock3(char **map, int x, int y, int code)
{
	if (code == 5)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 1][x - 1] = '.';
	}
	else if (code == 6)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 2][x + 1] = '.';
	}
	else if (code == 7)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y][x + 1] = '.';
		map[y][x + 2] = '.';
	}
}

void	ft_resetblock4(char **map, int x, int y, int code)
{
	if (code == 8)
	{
		map[y][x] = '.';
		map[y][x + 1] = '.';
		map[y + 1][x + 1] = '.';
		map[y + 2][x + 1] = '.';
	}
	else if (code == 9)
	{
		map[y][x] = '.';
		map[y + 1][x - 2] = '.';
		map[y + 1][x - 1] = '.';
		map[y + 1][x] = '.';
	}
	else if (code == 10)
	{
		map[y][x] = '.';
		map[y + 1][x] = '.';
		map[y + 2][x] = '.';
		map[y + 2][x - 1] = '.';
	}
}
