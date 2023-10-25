/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:34 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/24 04:49:50 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; av[i]; i++){
        for (int j = 0; av[i][j]; j++)
            std::cout << (char)toupper(av[i][j]);
        std::cout << " ";
    }
    std::cout << std::endl;
}
