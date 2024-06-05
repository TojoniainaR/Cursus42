/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect_anim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:01:20 by torandri          #+#    #+#             */
/*   Updated: 2024/06/01 16:58:40 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void	ft_draw_collect(t_data *data)
// {
// 	data->data_img = 
// 	// mlx_clear_window(data->vars.mlx, data->vars.mlx_win);
// 	data->collect_anim[0] = mlx_xpm_file_to_image(data->vars.mlx, "./xpm/item_C.xpm", &data->data_img.width, &data->data_img.height);
// 	data->collect_anim[1] = mlx_xpm_file_to_image(data->vars.mlx, "./xpm/item_C_2.xpm", &data->data_img.width, &data->data_img.height);
// 	data->collect_anim[2] = mlx_xpm_file_to_image(data->vars.mlx, "./xpm/item_C_3.xpm", &data->data_img.width, &data->data_img.height);
// 	data->collect_anim[3] = mlx_xpm_file_to_image(data->vars.mlx, "./xpm/item_C_4.xpm", &data->data_img.width, &data->data_img.height);
// }

// int	ft_collect_anim(void *col_anim)
// {
// 	t_data		*data;

// 	data = (t_data *)col_anim;
// 	mlx_put_image_to_window(data->vars.mlx, data->vars.mlx_win, data->collect_anim[data->current_frame], data->data_img.i, data->data_img.j);
// 	data->current_frame = (data->current_frame + 1) % 4;
// 	ft_draw_collect(data);
// 	return (0);
// }