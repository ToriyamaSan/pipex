/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:16:31 by dle-fur           #+#    #+#             */
/*   Updated: 2024/12/20 13:43:16 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/types.h>
# include "../libraries/libft/libft.h"

/*-----------------------------------------------*/

typedef struct s_pipex
{
	char	*input_file;//argv[1]
	char	*output_file;//argv[4]
	char	**cmd1;//argv[2] argument premiere commande en chaine {"ls", "l", NULL}
	char	**cmd2;//argv[3] argument deuxieme commande en chaine {"ls", "l", NULL}
	int		pipe_fd[2];//tableau descripteur de pipe (pipe_fd[0] = lecture, pipe_fd[1] = ecriture)
	int		input_fd;//descripteur pour le fichier d entree
	int		output_fd;//descripteur pour le fichier de sortie
}	t_pipex;

/*-----------------------------------------------*/

//utils
void	init_pipex(t_pipex *pipex, char **argv);
void	check_files(t_pipex *pipex);

//main
int	check_args(int argc);

#endif