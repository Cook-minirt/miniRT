/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plane_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:11:46 by yolee             #+#    #+#             */
/*   Updated: 2022/10/27 20:28:31 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "plane.h"

struct s_plane	plane_gen(t_vec3 plane_point, t_vec3 orient, t_color3 color)
{
	struct s_plane	plane;

	plane.plane_point = plane_point;
	plane.orient = orient;
	plane.color = color;
	return (plane);
}
