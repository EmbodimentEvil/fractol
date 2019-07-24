/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:55:26 by sleonia           #+#    #+#             */
/*   Updated: 2019/07/24 07:33:47 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_fractol			*create_struct(void)
{
	t_fractol		*fractol;

	if (!(fractol = (t_fractol *)malloc(sizeof(t_fractol))))
		return (NULL);
	if (!(fractol->mlx = (t_mlx *)malloc(sizeof(t_mlx))))
		return (NULL);
	if (!(fractol->crdt = (t_crdt *)malloc(sizeof(t_crdt))))
		return (NULL);
	fractol->crdt->x = 0;
	fractol->crdt->y = 0;
	return (fractol);
}
