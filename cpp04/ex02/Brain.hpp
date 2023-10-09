/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:15:35 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/06 18:16:32 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>


class Brain
{
    private:
	    std::string	ideas[100];
    public:
        Brain(void);
        ~Brain(void);
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
};

#endif