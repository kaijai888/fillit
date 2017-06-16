/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillfunct1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/14 17:51:41 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/14 17:51:43 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_initializethree(int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

void	ft_initializearray(int *array)
{
	array[0] = 0;
	array[1] = 0;
	array[2] = 0;
	array[3] = 0;
}

int		ft_finddim(int n)
{
	int		d;

	d = 1;
	while (d * d < n)
		d++;
	return (d);
}

void	ft_shiftup(char *str)
{
	int		times;
	int		i;
	int		row;

	times = 0;
	while (times < 3)
	{
		i = 0;
		row = 0;
		while (i < 20)
		{
			if (i == 5 || i == 10 || i == 15)
				row++;
			if (str[i] == '#' && row == 0)
				return ;
			if (str[i] == '#' && row > 0)
			{
				str[i] = '.';
				str[i - 5] = '#';
			}
			i++;
		}
		times++;
	}
}

void	ft_shiftleft(char *str)
{
	int		times;
	int		i;
	int		c;
	int		col;

	times = 0;
	while (++times <= 3)
	{
		ft_initializethree(&i, &c, &col);
		while (++col <= 4)
		{
			i = col - 1;
			c = -1;
			while (++c < 4)
			{
				if (col == 1 && str[i] == '#')
					return ;
				if (col > 1 && str[i] == '#')
					str[i - 1] = '#';
				if (col > 1 && str[i] == '#')
					str[i] = '.';
				i += 5;
			}
		}
	}
}
