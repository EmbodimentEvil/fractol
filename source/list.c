/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:55:26 by sleonia           #+#    #+#             */
/*   Updated: 2019/08/06 06:34:59 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int					delete_struct(int key, t_fractol *f)
{
	if (key == 1 || key == 2 || key == 3 || key == 4)
	{
		// ft_strdel(&(f->opencl->cl));
		// ft_memdel((void *)&(f->opencl->arr_output));
		// ft_memdel((void *)&(f->opencl->arr_x));
		// ft_memdel((void *)&(f->opencl->arr_y));
		ft_memdel((void *)(f->opencl));
	}
	if (key == 2 || key == 3 || key == 4)
		ft_memdel((void *)(f->crdn));
	if (key == 3 || key == 4)
		ft_memdel((void *)(f->mlx));
	if (key == 4)
		ft_memdel((void *)(f->cmplx));
	if (key == 0 || key == 1 || key == 2 || key == 3 || key == 4)
		ft_memdel((void *)f);
	return (0);
}

void				fill_crdn(t_fractol *f)
{
	f->crdn->min_x = -2.0;
	f->crdn->max_x = 1.0;
	f->crdn->min_y = -1.0;
	f->crdn->max_y = 1.0;
	f->crdn->shift_x = (f->crdn->max_x - f->crdn->min_x) / (WIDTH - 1);
	f->crdn->shift_y = (f->crdn->max_y - f->crdn->min_y) / (HIGHT - 1);
	f->crdn->move_x = 0.0;
	f->crdn->move_y = 0.0;
}

t_fractol			*create_struct(void)
{
	t_fractol		*f;

	if (!(f = (t_fractol *)malloc(sizeof(t_fractol))))
		return (NULL);
	f->move_flag = 0;
	if (!(f->opencl = (t_opencl *)malloc(sizeof(t_opencl))))
		delete_struct(0, f);
	f->opencl->size = 500;
	if (!(f->crdn = (t_crdn *)malloc(sizeof(t_crdn))))
		delete_struct(1, f);
	fill_crdn(f);
	if (!(f->mlx = (t_mlx *)malloc(sizeof(t_mlx))))
		delete_struct(2, f);
	if (!(f->cmplx = (t_cmplx *)malloc(sizeof(t_cmplx))))
		delete_struct(3, f);
	f->cmplx->repeats = 3000;
	f->color = BLOOD;
	return (f);
}
