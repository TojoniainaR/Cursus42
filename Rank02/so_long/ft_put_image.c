/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:13:38 by torandri          #+#    #+#             */
/*   Updated: 2024/05/30 20:51:59 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_put_img(t_data *data, t_put_img put_img)
{	
	mlx_destroy_image(data->vars.mlx, put_img.player_img);
	mlx_destroy_image(data->vars.mlx, put_img.collect_img);
	mlx_destroy_image(data->vars.mlx, put_img.wall_img);
	mlx_destroy_image(data->vars.mlx, put_img.exit_img);
}

void	ft_image(t_data *data, t_put_img put_img)
{
	t_data_img	data_img;

	data_img.i = 1;
	data_img.j = 1;
	while (data_img.j < data->y - 1 && data->map[data_img.j][data_img.i] != '\0')
	{
		data_img.i = 1;
		while (data_img.i < data->x - 1)
		{
			if (data->map[data_img.j][data_img.i] == '1')
				mlx_put_image_to_window(data->vars.mlx, data->vars.mlx_win, \
				put_img.wall_img, data_img.i * SCALE, data_img.j * SCALE);
			if (data->map[data_img.j][data_img.i] == 'P')
				mlx_put_image_to_window(data->vars.mlx, data->vars.mlx_win, \
				put_img.player_img, data_img.i * SCALE, data_img.j * SCALE);
			if (data->map[data_img.j][data_img.i] == 'E')
				mlx_put_image_to_window(data->vars.mlx, data->vars.mlx_win, \
				put_img.exit_img, data_img.i * SCALE, data_img.j * SCALE);
			if (data->map[data_img.j][data_img.i] == 'C')
				mlx_put_image_to_window(data->vars.mlx, data->vars.mlx_win, \
				put_img.collect_img, data_img.i * SCALE, data_img.j * SCALE);
			data_img.i++;
		}
		data_img.j++;
	}
}

void	ft_put_image(t_data *data)
{
	t_put_img	put_img;
	t_data_img	data_img;
	ft_init_map(data->vars.mlx, data->vars.mlx_win, data->x, data->y);
	put_img.wall_img = mlx_xpm_file_to_image(data->vars.mlx, \
	"./xpm/item_1.xpm", &data_img.width, &data_img.height);
	put_img.player_img = mlx_xpm_file_to_image(data->vars.mlx, \
	"./xpm/char_front.xpm", &data_img.width, &data_img.height);
	put_img.collect_img = mlx_xpm_file_to_image(data->vars.mlx, \
	"./xpm/item_C.xpm", &data_img.width, &data_img.height);
	put_img.exit_img = mlx_xpm_file_to_image(data->vars.mlx, \
	"./xpm/item_E.xpm", &data_img.width, &data_img.height);
	ft_image(data, put_img);
	ft_free_put_img(data, put_img);
}
