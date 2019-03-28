/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 19:48:54 by aabdulla          #+#    #+#             */
/*   Updated: 2019/03/28 19:48:55 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libavec.h"

double	ft_vangle(t_vector a, t_vector b)
{
	return (ft_vdot(a, b) / (ft_vlength(a) * ft_vlength(b)));
}
