/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:13:57 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/01 22:41:14 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>



class Fixed{
    private:
        int fixed_point;
        static const int fractional_bits;
    public:
        Fixed();
        Fixed(const Fixed &obj_point);
        Fixed &operator=(const Fixed &obj_point);
        ~Fixed();
        int getRawBits();
        void setRawBits(int const raw_bits);
};

#endif