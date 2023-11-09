/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:01:47 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/02 16:51:39 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    //creation variables
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << string << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    std::cout << "adress :" << std::endl;

    std::cout << &string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    return 0;
}