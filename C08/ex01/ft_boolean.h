/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_boolean.h                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mojacque <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 18:16:08 by mojacque     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/23 01:29:48 by mojacque    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(x) x % 2 == 0
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef int		t_bool;
#endif
