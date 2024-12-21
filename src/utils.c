/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 09:38:17 by david             #+#    #+#             */
/*   Updated: 2024/12/20 11:13:29 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	init_pipex(t_pipex *pipex, char **argv)
{
	pipex->input_file = argv[1];
	pipex->output_file = argv[4];
	pipex->cmd1 = argv[2];
	pipex->cmd2 = argv[3];
	pipex->pipe_fd[0] = -1;
	pipex->pipe_fd[1] = -1;
	pipex->input_fd = -1;
	pipex->output_fd = -1;
}

void	check_files(t_pipex *pipex)
{
	
}