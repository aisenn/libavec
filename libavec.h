/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libavec.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:22:20 by aabdulla          #+#    #+#             */
/*   Updated: 2019/02/19 15:22:23 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBAVEC_H
# define LIBAVEC_H

# include <math.h>

/*
**typedef double	t_vector __attribute__((vector_size(sizeof(double)*3)));
*/
typedef double	t_vector __attribute__((ext_vector_type(4)));

t_vector	ft_vopmult(double scalar, t_vector v);
t_vector	ft_vmult(t_vector v, double scalar);
t_vector	ft_vcross(t_vector a, t_vector b);
double		ft_vangle(t_vector a, t_vector b);
double		ft_vdist(t_vector a, t_vector b);
double		ft_vdot(t_vector a, t_vector b);
double		ft_vlength(t_vector vec);
void		ft_vnorm(t_vector *vec);

#endif
