/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:27:03 by jhii              #+#    #+#             */
/*   Updated: 2022/04/22 13:43:08 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	main(int argc, char **argv)
{
	t_table	table;

	if (argc != 5 && argc != 6)
		return (0);
	if (check_input(argc, argv) < 0)
	{
		printf("Error\n");
		return (0);
	}
	table_init(&table, argc, argv);
	philo(&table);
	return (0);
}
