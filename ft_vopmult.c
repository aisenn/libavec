/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vopmult.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:14:39 by aabdulla          #+#    #+#             */
/*   Updated: 2019/02/19 15:15:26 by aabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libavec.h"

t_vector	ft_vopmult(double scalar, t_vector v)
{
	return (ft_vmult(v, scalar));
}
