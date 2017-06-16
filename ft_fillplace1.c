/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillplace1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 00:00:05 by kzeng             #+#    #+#             */
/*   Updated: 2016/10/20 00:00:13 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	ft_placeblock(char **map, int *var, int code, char c)
{
	if (code == 1 || code == 2)
		return (ft_placeblock2(map, var, code, c));
	else if (code == 3 || code == 4)
		return (ft_placeblock3(map, var, code, c));
	else if (code == 5 || code == 6)
		return (ft_placeblock4(map, var, code, c));
	else if (code == 7 || code == 8)
		return (ft_placeblock5(map, var, code, c));
	else if (code == 9 || code == 10)
		return (ft_placeblock6(map, var, code, c));
	else if (code == 11 || code == 12)
		return (ft_placeblock7(map, var, code, c));
	else if (code == 13 || code == 14)
		return (ft_placeblock8(map, var, code, c));
	else if (code == 15 || code == 16)
		return (ft_placeblock9(map, var, code, c));
	else if (code == 17 || code == 18)
		return (ft_placeblock10(map, var, code, c));
	else if (code == 19)
		return (ft_placeblock11(map, var, code, c));
	return (0);
}
