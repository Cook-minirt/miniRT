/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:25:08 by yolee             #+#    #+#             */
/*   Updated: 2022/10/26 21:16:02 by yolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include <math.h>
# include "minirt.h"

typedef struct s_dvec3	t_vec3;
typedef struct s_dvec3	t_color3;

struct s_dvec3
{
	double	x;
	double	y;
	double	z;
};

struct s_dvec3	v_gen(double x, double y, double z);
double			v_inner(struct s_dvec3 vec1, struct s_dvec3 vec2);
struct s_dvec3	v_sum(struct s_dvec3 vec1, struct s_dvec3 vec2);
struct s_dvec3	v_diff(struct s_dvec3 vec1, struct s_dvec3 vec2);
struct s_dvec3	v_mult(struct s_dvec3 vec, double sca);
double			v_abs(struct s_dvec3 vec);
struct s_dvec3	v_unit(struct s_dvec3 vec);

#endif