/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vcross.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:18:17 by aabdulla          #+#    #+#             */
/*   Updated: 2019/02/19 15:19:22 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libavec.h"

t_vector		ft_vcross(t_vector a, t_vector b)
{
	t_vector	v;

	v.x = a.y * b.z - a.z * b.y;
	v.y = a.z * b.x - a.x * b.z;
	v.z = a.x * b.y - a.y * b.x;
	return (v);
}
