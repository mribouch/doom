/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onepunchman_entity.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 02:06:24 by lbenard           #+#    #+#             */
/*   Updated: 2020/07/27 18:14:05 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ONEPUNCHMAN_ENTITY_H
# define ONEPUNCHMAN_ENTITY_H

# include "game/entities/monster_entity.h"
# include "engine/animation.h"

typedef struct	s_onepunchman_entity
{
	t_monster_entity	super;
}				t_onepunchman_entity;

typedef struct	s_onepunchman_entity_args
{
	t_scene	*scene;
	t_vec2f	pos;
}				t_onepunchman_entity_args;

t_constructor	onepunchman_entity(t_scene *const scene, const t_vec2f pos);

t_result		init_onepunchman_entity(t_onepunchman_entity *const self,
					const t_onepunchman_entity_args *const args);

void			onepunchman_entity_update(t_onepunchman_entity *const self);

void			destroy_onepunchman_entity(t_onepunchman_entity *const self);

#endif