/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:12:41 by yolee             #+#    #+#             */
/*   Updated: 2022/11/13 22:14:06 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHERE_H
# define SPHERE_H
# include "ray.h"

typedef struct s_sphere
{
	t_vec3		cen;
	double		diameter;
	t_color3	color;
}t_sphere;

struct s_sphere	sphere_gen(t_vec3 cen, double diameter, t_color3 color);
#endif