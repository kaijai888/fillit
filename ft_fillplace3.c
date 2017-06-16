/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillplace3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 00:17:55 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/20 00:17:56 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		ft_placeblock11(char **map, int *v, int code, char c)
{
	if (code == 19 && (v[0] <= v[2] - 4) && (v[1] <= v[2] - 1))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1]][v[0] + 1] == '.' &&
		map[v[1]][v[0] + 2] == '.' && map[v[1]][v[0] + 3] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1]][v[0] + 1] = c;
			map[v[1]][v[0] + 2] = c;
			map[v[1]][v[0] + 3] = c;
			return (1);
		}
	}
	return (0);
}

int		ft_placeblock10(char **map, int *v, int code, char c)
{
	if (code == 17 && (v[0] <= v[2] - 1) && (v[0] > 0) && (v[1] <= v[2] - 3))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1] + 1][v[0]] == '.' &&
		map[v[1] + 1][v[0] - 1] == '.' && map[v[1] + 2][v[0] - 1] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1] + 1][v[0]] = c;
			map[v[1] + 1][v[0] - 1] = c;
			map[v[1] + 2][v[0] - 1] = c;
			return (1);
		}
	}
	if (code == 18 && (v[0] <= v[2] - 1) && (v[1] <= v[2] - 4))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1] + 1][v[0]] == '.' &&
		map[v[1] + 2][v[0]] == '.' && map[v[1] + 3][v[0]] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1] + 1][v[0]] = c;
			map[v[1] + 2][v[0]] = c;
			map[v[1] + 3][v[0]] = c;
			return (1);
		}
	}
	return (0);
}

int		ft_placeblock9(char **map, int *v, int code, char c)
{
	if (code == 15 && (v[0] <= v[2] - 2) && (v[1] <= v[2] - 3))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1] + 1][v[0]] == '.' &&
		map[v[1] + 1][v[0] + 1] == '.' && map[v[1] + 2][v[0] + 1] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1] + 1][v[0]] = c;
			map[v[1] + 1][v[0] + 1] = c;
			map[v[1] + 2][v[0] + 1] = c;
			return (1);
		}
	}
	if (code == 16 && (v[0] <= v[2] - 3) && (v[1] <= v[2] - 2))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1]][v[0] + 1] == '.' &&
		map[v[1] + 1][v[0] + 1] == '.' && map[v[1] + 1][v[0] + 2] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1]][v[0] + 1] = c;
			map[v[1] + 1][v[0] + 1] = c;
			map[v[1] + 1][v[0] + 2] = c;
			return (1);
		}
	}
	return (0);
}

int		ft_placeblock8(char **map, int *v, int code, char c)
{
	if (code == 13 && (v[0] <= v[2] - 3) && (v[1] <= v[2] - 2))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1]][v[0] + 1] == '.' &&
		map[v[1]][v[0] + 2] == '.' && map[v[1] + 1][v[0] + 2] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1]][v[0] + 1] = c;
			map[v[1]][v[0] + 2] = c;
			map[v[1] + 1][v[0] + 2] = c;
			return (1);
		}
	}
	if (code == 14 && (v[0] <= v[2] - 2) && (v[0] > 0) && (v[1] <= v[2] - 2))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1]][v[0] + 1] == '.' &&
		map[v[1] + 1][v[0] - 1] == '.' && map[v[1] + 1][v[0]] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1]][v[0] + 1] = c;
			map[v[1] + 1][v[0] - 1] = c;
			map[v[1] + 1][v[0]] = c;
			return (1);
		}
	}
	return (0);
}

int		ft_placeblock7(char **map, int *v, int code, char c)
{
	if (code == 11 && (v[0] <= v[2] - 3) && (v[1] <= v[2] - 2))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1] + 1][v[0]] == '.' &&
		map[v[1] + 1][v[0] + 1] == '.' && map[v[1] + 1][v[0] + 2] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1] + 1][v[0]] = c;
			map[v[1] + 1][v[0] + 1] = c;
			map[v[1] + 1][v[0] + 2] = c;
			return (1);
		}
	}
	if (code == 12 && (v[0] <= v[2] - 2) && (v[1] <= v[2] - 3))
	{
		if (map[v[1]][v[0]] == '.' && map[v[1]][v[0] + 1] == '.' &&
		map[v[1] + 1][v[0]] == '.' && map[v[1] + 2][v[0]] == '.')
		{
			map[v[1]][v[0]] = c;
			map[v[1]][v[0] + 1] = c;
			map[v[1] + 1][v[0]] = c;
			map[v[1] + 2][v[0]] = c;
			return (1);
		}
	}
	return (0);
}
