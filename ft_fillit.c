/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 20:50:43 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/14 20:50:45 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		ft_checkpattern2(char *str, char **patterns)
{
	int		i;

	i = 0;
	while (i < 19)
	{
		if (ft_strcmp(patterns[i++], str) == 0)
			return (i);
	}
	return (0);
}

int		ft_checkpattern(char *str)
{
	char	*patterns[20];

	patterns[0] = "##..\n##..\n....\n....\n";
	patterns[1] = ".#..\n###.\n....\n....\n";
	patterns[2] = "#...\n##..\n#...\n....\n";
	patterns[3] = "###.\n.#..\n....\n....\n";
	patterns[4] = ".#..\n##..\n.#..\n....\n";
	patterns[5] = "#...\n#...\n##..\n....\n";
	patterns[6] = "###.\n#...\n....\n....\n";
	patterns[7] = "##..\n.#..\n.#..\n....\n";
	patterns[8] = "..#.\n###.\n....\n....\n";
	patterns[9] = ".#..\n.#..\n##..\n....\n";
	patterns[10] = "#...\n###.\n....\n....\n";
	patterns[11] = "##..\n#...\n#...\n....\n";
	patterns[12] = "###.\n..#.\n....\n....\n";
	patterns[13] = ".##.\n##..\n....\n....\n";
	patterns[14] = "#...\n##..\n.#..\n....\n";
	patterns[15] = "##..\n.##.\n....\n....\n";
	patterns[16] = ".#..\n##..\n#...\n....\n";
	patterns[17] = "#...\n#...\n#...\n#...\n";
	patterns[18] = "####\n....\n....\n....\n";
	patterns[19] = 0;
	return (ft_checkpattern2(str, patterns));
}

int		*ft_validfile(int fd)
{
	int		*code;
	char	buf[21];
	int		i;
	int		ret;
	int		c;

	MALLOC_CHECK_RETNUL(code = (int *)malloc(sizeof(int) * 27));
	i = 0;
	ret = 1;
	c = 1;
	while (ret != 0)
	{
		if ((ret = read(fd, buf, 20)) == -1)
			return (NULL);
		buf[ret] = '\0';
		if ((c == 1 && ret != 20) || i > 25)
			return (NULL);
		if (ret != 0)
			FUNCTION_CHECK(ft_storecode(&c, buf, code, &i));
		c = read(fd, buf, 1);
		if (c == -1 || (c == 1 && buf[0] != '\n'))
			return (NULL);
	}
	code[i] = 0;
	return (code);
}

int		ft_solvemap(char **map, int dim, int *code, int i)
{
	int		var[4];

	ft_initializearray(var);
	if (code[i] == 0)
		return (1);
	while (var[1] != dim)
	{
		var[2] = ft_findempty(map, var[0], var[1]);
		var[0] = var[2] % 100;
		var[1] = var[2] / 100;
		var[2] = dim;
		if (ft_placeblock(map, var, code[i], 'A' + i) == 1)
		{
			if (ft_solvemap(map, dim, code, i + 1))
				return (1);
			ft_resetblock(map, var[0], var[1], code[i]);
		}
		if (var[0]++ == dim)
		{
			var[0] = 0;
			var[1]++;
		}
	}
	return (0);
}

int		main(int argc, char const **argv)
{
	int		var[4];
	int		*code;
	char	**map;

	ft_initializearray(var);
	code = NULL;
	var[0] = open(argv[1], O_RDONLY);
	if (var[0] != -1)
		code = ft_validfile(var[0]);
	if (!ft_dealerrors(argc, var[0], code))
		return (0);
	while (code[var[2]] != 0)
		var[2]++;
	var[1] = ft_finddim(4 * var[2]);
	map = ft_blankmap(var[1]);
	while (ft_solvemap(map, var[1], code, 0) != 1)
	{
		ft_freemap(&map, var[1]);
		map = ft_blankmap(++var[1]);
	}
	ft_printmap(map, var[1]);
	free(code);
	ft_freemap(&map, var[1]);
	close(var[0]);
	return (0);
}
