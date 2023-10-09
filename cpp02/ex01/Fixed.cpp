/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:13:55 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/02 02:23:34 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj_point) : fixed_point(obj_point.fixed_point){
     std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj_point)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    if (this != &obj_point)
        fixed_point = obj_point.fixed_point;
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw_point){
    this->fixed_point = raw_point;
}

int Fixed::getRawBits(){
    std::cout << "getRawBits member function called" << std::endl;
    return(fixed_point);
}

Fixed::Fixed(const int i){
    std::cout<<"Int constructor called"<<std::endl;
    fixed_point = (int) roundf(i * 256);
}

Fixed::Fixed(const float f){
    std::cout<<"Float constructor called"<<std::endl;
    fixed_point = (int) roundf(f * 256);
}

int Fixed::toInt() const{
    return(this->fixed_point / 256);
}

float Fixed::toFloat() const{
    return(this->fixed_point / 256.0f);
}

std::ostream &operator<< (std::ostream &out, const Fixed &flt)
{
	out << flt.toFloat();
	return out;
}
