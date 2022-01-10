/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:40:17 by olabrahm          #+#    #+#             */
/*   Updated: 2022/01/03 13:55:06 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
long long	ft_atoi(const char *str);
int			ft_isdigit(int c);
char		*ft_strdup(char *s);
char		*ft_strjoin(char *s1, char c);
int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);

#endif