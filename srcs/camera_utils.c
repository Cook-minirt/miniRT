/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:55:13 by yolee             #+#    #+#             */
/*   Updated: 2022/10/27 21:44:05 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

struct s_camera	camera_gen(t_vec3 coor, t_vec3 orient, double fov)
{
	struct s_camera	camera;

	camera.coor = coor;
	camera.orient = orient;
	camera.fov = (fov / 180.0) * M_PI;
	return (camera);
}