/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals_ex01_sender.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khabbout <khabbout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:32:20 by khabbout          #+#    #+#             */
/*   Updated: 2023/03/21 17:22:51 by khabbout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

/*ask the user for PID and signal to send*/
int main(void)
{
    int receiver_pid;
    int signal_number;

    printf("\033[0;33mEnter the PID : ");
                    scanf("%d", &receiver_pid);

    printf("Which signal you want to try (1|2): ");
    scanf("%d", &signal_number);
    if(signal_number == 1)
    {
        kill(receiver_pid, SIGUSR1);
        printf("SIGUSR1 sent!\n");
    }
    if(signal_number == 2)
    {
        kill(receiver_pid, SIGUSR2);
        printf("SIGUSR2 sent!\n");
    }

}
