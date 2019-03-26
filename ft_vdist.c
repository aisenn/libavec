/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 17:30:26 by aabdulla          #+#    #+#             */
/*   Updated: 2019/03/26 17:31:58 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libavec.h"

double		ft_vdist(t_vector a, t_vector b)
{
	double	dx;
	double	dy;
	double	dz;

	dx = (a.x - b.x);
	dy = (a.y - b.y);
	dz = (a.z - b.z);
	return (sqrt(dx * dx + dy * dy + dz * dz));
}
