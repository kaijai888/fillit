/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:11:07 by kzeng             #+#    #+#             */
/*   Updated: 2016/09/23 11:11:08 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFILLIT_H
# define LIBFILLIT_H
# define MALLOC_CHECK_RETNUL(x) if ((x) == NULL) { return (NULL); }
# define FUNCTION_CHECK(x) if ((x) == 0) { return (NULL); }

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int					ft_strcmp(char *s1, char *s2);
char				*ft_strdup(const char *s1);
int					ft_checkpattern2(char *str, char **patterns);
int					ft_checkpattern(char *str);
void				ft_initializethree(int *a, int *b, int *c);
void				ft_initializearray(int *array);
void				ft_shiftup(char *str);
void				ft_shiftleft(char *str);
int					ft_finddim(int n);
char				**ft_blankmap(int dim);
int					ft_findempty(char **map, int x, int y);
int					ft_placeblock(char **map, int *var, int code, char c);
int					ft_placeblock2(char **map, int *var, int code, char c);
int					ft_placeblock3(char **map, int *var, int code, char c);
int					ft_placeblock4(char **map, int *var, int code, char c);
int					ft_placeblock5(char **map, int *var, int code, char c);
int					ft_placeblock6(char **map, int *var, int code, char c);
int					ft_placeblock7(char **map, int *var, int code, char c);
int					ft_placeblock8(char **map, int *var, int code, char c);
int					ft_placeblock9(char **map, int *var, int code, char c);
int					ft_placeblock10(char **map, int *var, int code, char c);
int					ft_placeblock11(char **map, int *var, int code, char c);
void				ft_resetblock(char **map, int x, int y, int code);
void				ft_printmap(char **map, int dim);
void				ft_resetblock(char **map, int x, int y, int code);
void				ft_resetblock2(char **map, int x, int y, int code);
void				ft_resetblock3(char **map, int x, int y, int code);
void				ft_resetblock4(char **map, int x, int y, int code);
void				ft_resetblock5(char **map, int x, int y, int code);
void				ft_resetblock6(char **map, int x, int y, int code);
void				ft_resetblock7(char **map, int x, int y, int code);
void				ft_freemap(char ***map, int dim);
int					ft_dealerrors(int argc, int fd, int *code);
int					ft_storecode(int *c, char *buf, int *code, int *i);

#endif
