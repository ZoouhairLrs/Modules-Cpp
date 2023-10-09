/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:19:34 by zlaarous          #+#    #+#             */
/*   Updated: 2023/09/21 16:19:36 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int ac, char **av)
{
    if (ac < 2)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return (0);
    }
    for (int i = 1; av[i]; i++){
        for (int j = 0; av[i][j]; j++)
            cout << (char)toupper(av[i][j]);
        cout << " ";
    }
    cout << endl;
}