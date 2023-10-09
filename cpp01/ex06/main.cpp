/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:50:43 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/29 14:00:46 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void Harl::complain(std::string level)
{
    std::string complains [4] = {"debug", "info", "warning", "error"};
	void (Harl::*funcs[4])();
	int	i;
	int indexMSG;

	funcs[0] = &Harl::debug;
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		while (!level.compare(complains[i]))
		{
			indexMSG = i;
			break ;
		}
		i++;
	}
	switch (indexMSG)
	{
		case 0:
            (this->*funcs[0])();
            break ;
        case 1:
            (this->*funcs[1])();
            break ;
        case 2:
            (this->*funcs[2])();
            break ;
        case 3:
            (this->*funcs[3])();
            break ;
        default:
            break ;
	}
}

int main(int ac, char **av)
{
    Harl harl;

	if (ac != 2)
    {
        std::cout << "Invalid number of arguments!" << std::endl;
        return (0);
    }
    harl.complain(av[1]);
    return (0);
}