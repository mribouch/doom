/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenard <lbenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:33:22 by ppetitea          #+#    #+#             */
/*   Updated: 2020/01/05 22:25:45 by lbenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game/map_parser/parser.h"
#include <stdlib.h>

static void		free_object_recursively(t_dnon_object *obj)
{
	if (obj->key != NULL)
		free(obj->key);
	if (obj->type != LIST && obj->value != NULL)
		free(obj->value);
	else
	{
		list_foreach((t_list_head*)obj->value, 0, free_object);
		free(obj->value);
	}
}

void		free_object(t_dnon_object *obj)
{
	free_object_recursively(obj);
	free(obj);
}
