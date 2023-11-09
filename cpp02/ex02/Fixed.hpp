/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:13:57 by zlaarous          #+#    #+#             */
/*   Updated: 2023/11/09 18:12:55 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>



class Fixed {
    private:
        int fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &obj_point);
        ~Fixed();
        int getRawBits();
        void setRawBits(int const raw_bits);

        Fixed (const int i);
        Fixed (const float f);
        int toInt() const;
        float toFloat() const;

        Fixed &operator = (const Fixed &obj_point);
        Fixed operator + ( const Fixed &obj) const;
        Fixed operator - ( const Fixed &obj)const;
        Fixed operator * ( const Fixed &obj)const;
        Fixed operator / ( const Fixed &obj)const;

        bool operator > ( const Fixed &obj)const;
        bool operator < ( const Fixed &obj)const;
        bool operator >= ( const Fixed &obj)const;
        bool operator <= ( const Fixed &obj)const;
        bool operator == ( const Fixed &obj)const;
        bool operator != ( const Fixed &obj)const;

	    Fixed operator ++ (int);
	    Fixed operator -- (int);
        Fixed &operator ++ (void);
        Fixed &operator -- (void);

        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif