/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:39:43 by tojoniaina        #+#    #+#             */
/*   Updated: 2024/06/02 15:59:17 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_initiate_data(t_data *data)
{
	data->x = 0;
	data->y = 0;
	data->move = 1;
}

void	ft_initiate_check(t_check_map *check)
{
	check->i = 1;
	check->j = 1;
	check->p_count = 0;
	check->e_count = 0;
	check->c_count = 0;
}

int	ft_loop_map(int x, int y, char **map)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (map[j][i] != '1' && map[j][i] != '0' && map[j][i] != 'P' \
			&& map[j][i] != 'E' && map[j][i] != 'C')
			{
				ft_printf("The map must only contain 1, 0, P, C and E\n");
				return (1);
			}
			i++;
		}
		j++;
	}
	return (0);
}

int	ft_check_error(int argc, char *argv[])
{
	if (argc != 2)
	{
		perror("Missing argument");
		return (1);
	}
	if (!ft_strnstr(argv[1], ".ber", ft_strlen(argv[1])) || argv[1][0] == '.')
	{
		perror("Not the right input, might be <map.ber>");
		return (1);
	}
}
