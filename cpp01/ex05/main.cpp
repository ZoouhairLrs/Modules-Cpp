/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:50:43 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/03 03:32:38 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void Harl::complain(std::string level)
{
    std::string complains [4] = {"debug", "info", "warning", "error"};
	void (Harl::*funcs[4])();
	int	i;

	funcs[0] = &Harl::debug;
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		while (!level.compare(complains[i]))
		{
			(this->*funcs[i])();
			break ;
		}
		i++;
	}
}

int main()
{
    Harl harl;

	harl.complain("error");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("debug");
}