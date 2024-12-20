/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:21:30 by dle-fur           #+#    #+#             */
/*   Updated: 2024/12/20 10:21:01 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	check_args(int argc)
{
	if (argc != 5)
	{
		ft_printf("Usage : ./pipex file1 cmd1 cmd2 file2\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (check_args(argc))
		return (1);
	return (0);
}
