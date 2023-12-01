/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:31:43 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/30 21:26:02 by zlaarous         ###   ########.fr       */
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