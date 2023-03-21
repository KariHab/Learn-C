/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals_exo1_receiver.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:33:11 by khabbout          #+#    #+#             */
/*   Updated: 2023/03/21 16:33:51 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*To be added by the user. The user should receive the signal sent*/

#include <stdio.h>
#include<signal.h>
#include<unistd.h>

void signal_handler(int sig_number)
{
    if (sig_number == SIGUSR1)
        printf("SIGUSR1 received!\n");
    else if (sig_number == SIGUSR2)
        printf("SIGUSR2 received!\n");
}

int main()
{
    pid_t pid;

    pid = getpid();
    printf("PID to use: %d\n", pid);
    while(1)
    {
        signal(SIGUSR1, signal_handler);
        signal(SIGUSR2, signal_handler);
        pause();
    }
}