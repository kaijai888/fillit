/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillfunct2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 17:51:48 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/14 17:51:49 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	if (!s1)
		return (NULL);
	MALLOC_CHECK_RETNUL(str = (char *)malloc(sizeof(char) * (len + 1)));
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_blankmap(int dim)
{
	char	*line;
	char	**map;
	int		x;
	int		y;

	MALLOC_CHECK_RETNUL(line = (char *)malloc(sizeof(char) * (dim + 1)));
	MALLOC_CHECK_RETNUL(map = (char **)malloc(sizeof(char *) * (dim + 1)));
	x = 0;
	y = 0;
	while (x < dim)
		line[x++] = '.';
	line[x] = '\0';
	while (y < dim)
		map[y++] = ft_strdup(line);
	map[y] = 0;
	free(line);
	return (map);
}

int		ft_findempty(char **map, int x, int y)
{
	int		num;

	while (map[y] != 0 && map[y][x] != '.')
	{
		x++;
		if (map[y][x] == '\0')
		{
			x = 0;
			y++;
		}
	}
	num = x + (y * 100);
	return (num);
}

void	ft_printmap(char **map, int dim)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y != dim)
	{
		write(1, &map[y][x], 1);
		x++;
		if (x == dim)
		{
			write(1, "\n", 1);
			x = 0;
			y++;
		}
	}
}
