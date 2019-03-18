/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vmult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:15:38 by aabdulla          #+#    #+#             */
/*   Updated: 2019/02/19 15:20:31 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libavec.h"

t_vector		ft_vmult(t_vector v, double scalar)
{
	t_vector	tmp;

	tmp[0] = scalar * v[0];
	tmp[1] = scalar * v[1];
	tmp[2] = scalar * v[2];
	return (tmp);
}
