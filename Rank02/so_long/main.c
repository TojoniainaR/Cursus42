/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:23:36 by torandri          #+#    #+#             */
/*   Updated: 2024/05/31 14:52:23 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	ft_initiate_data(&data);
	if (ft_check_error(argc, argv) == 1)
		return (1);
	data.file = ft_strjoin("./map/", argv[1]);
	ft_map_size(&data.x, &data.y, data.file);
	if (ft_check_map_error(data.x, data.y, data.file) == 1)
		return (free(data.file), 1);
	data.vars.mlx = mlx_init();
	if (!data.vars.mlx)
		return (free(data.vars.mlx), 1);
	data.vars.mlx_win = mlx_new_window(data.vars.mlx, \
	data.x * SCALE, data.y * SCALE, "so_long");
	if (!data.vars.mlx_win)
		return (free(data.vars.mlx), 1);
	ft_get_pos_player(&data);
	ft_put_image(&data);
	free(data.file);
	mlx_key_hook(data.vars.mlx_win, ft_key_events, &data);
	mlx_hook(data.vars.mlx_win, 17, 1L << 17, \
	ft_mouse_events, &data);
	mlx_loop(data.vars.mlx);
}
