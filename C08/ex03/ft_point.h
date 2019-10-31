/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_point.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 18:18:35 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 18:18:47 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct	s_point
{
	int x;
	int y;
}				t_point;

void			set_point(t_point *point);

#endif
