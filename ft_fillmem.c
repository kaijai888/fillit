/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillmem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/22 11:05:59 by sjang             #+#    #+#             */
/*   Updated: 2016/10/22 11:06:00 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_freemap(char ***map, int dim)
{
	int i;

	i = 0;
	while (i <= dim)
	{
		if ((*map)[i])
			free((*map)[i]);
		i++;
	}
	free(*map);
	*map = NULL;
}

int		ft_dealerrors(int argc, int fd, int *code)
{
	if (argc != 2)
	{
		write(1, "usage: ./fillit [source file]\n", 30);
		return (0);
	}
	if (fd == -1)
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (code == NULL)
	{
		close(fd);
		write(1, "error\n", 6);
		return (0);
	}
	return (1);
}

int		ft_storecode(int *c, char *buf, int *code, int *i)
{
	*c = 0;
	ft_shiftup(buf);
	ft_shiftleft(buf);
	if ((code[*i] = ft_checkpattern(buf)) == 0)
		return (0);
	*i += 1;
	return (1);
}
