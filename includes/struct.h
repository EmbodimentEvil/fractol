/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonia <sleonia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 02:56:00 by sleonia           #+#    #+#             */
/*   Updated: 2019/08/08 10:43:25 by sleonia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

/*
** Main header file
*/
# include "fractol.h"

typedef struct			s_cl
{
	cl_mem				res;
	cl_platform_id		p_id;
	cl_uint				ret_num_platforms;
	cl_device_id		d_id;
	cl_context			context;
	cl_command_queue	queue;
	cl_program			program;
	cl_kernel			kernel;
}						t_cl;

typedef struct			s_crdn
{
	double				max_x;
	double				min_x;
	double				max_y;
	double				min_y;
	double				shift_x;
	double				shift_y;
	double				move_x;
	double				move_y;
}						t_crdn;

typedef struct			s_mlx
{
	void				*ptr;
	void				*win;
	void				*img;
	int					*data;
	int					bpp;
	int					size_l;
	int					endn;
}						t_mlx;

typedef struct			s_cmplx
{
	double				start_x;
	double				start_y;
	double				new_x;
	double				new_y;
	double				sqr_x;
	double				sqr_y;
	int					repeats;
}						t_cmplx;

typedef struct			s_fractol
{
	short int			fractol;
	short int			move_flag;
	int					color;
	t_cl				*cl;
	t_crdn				*crdn;
	t_mlx				*mlx;
	t_cmplx				*cmplx;
}						t_fractol;

#endif
