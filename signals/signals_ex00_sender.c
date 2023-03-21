/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals_ex00_sender.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:50:39 by khabbout          #+#    #+#             */
/*   Updated: 2023/03/21 16:01:52 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>

/*to create if you want to test if you could send a signal*/
int	main(int ac, char **av)
{
	int	receiver_pid;

	if (ac == 3)
	{
		receiver_pid = atoi(av[1]);
		if (!av[2])
			return (1);
        if(av[2][0]== '1')
            kill(receiver_pid, SIGUSR1);
        if (av[2][0] == '2')
            kill(receiver_pid, SIGUSR2);
    }
    return (0);
}