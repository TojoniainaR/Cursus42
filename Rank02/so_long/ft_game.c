/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:48:42 by torandri          #+#    #+#             */
/*   Updated: 2024/05/31 11:01:14 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_game(t_data *data)
{
	t_data_img	*data_img;
	int     	i;
	char    	*str;
	void		*image;

	i = 0;
	str = "collect left : ";
	mlx_string_put(data->vars.mlx, data->vars.mlx_win, (data->x - 4) * SCALE, 16, 0xFFFFFF, str);
	data->collect = ft_collect_number(data);
	printf("data->collect = %d", data->collect);
}
