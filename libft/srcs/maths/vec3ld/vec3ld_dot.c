/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3ld_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 18:13:06 by lbenard           #+#    #+#             */
/*   Updated: 2019/02/20 19:25:31 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maths/vec3ld.h"

long double	vec3ld_dot(t_vec3ld a, t_vec3ld b)
{
	return (a.x * b.x
		+ a.y * b.y
		+ a.z * b.z);
}
