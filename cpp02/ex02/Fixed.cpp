/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaarous <zlaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:13:55 by zlaarous          #+#    #+#             */
/*   Updated: 2023/10/03 03:25:05 by zlaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0){
}

Fixed::Fixed(const Fixed &obj_point) : fixed_point(obj_point.fixed_point){
}

void Fixed::setRawBits(int const raw_point){
    this->fixed_point = raw_point;
}

int Fixed::getRawBits(){
    return(fixed_point);
}

Fixed &Fixed::operator=(const Fixed &obj_point)
{
    if (this != &obj_point)
        fixed_point = obj_point.fixed_point;
    return *this;
}

Fixed Fixed::operator + (Fixed const &obj) const
{
	return Fixed(this->fixed_point + obj.toFloat());
}

Fixed Fixed::operator - (Fixed const &obj) const
{
	return Fixed(this->fixed_point - obj.toFloat());
}

Fixed Fixed::operator * (Fixed const &obj) const
{
	return Fixed(this->fixed_point * obj.toFloat());
}

Fixed Fixed::operator / (Fixed const &obj) const
{
	return Fixed(this->fixed_point / obj.toFloat());
}

bool Fixed::operator > ( const Fixed &obj) const
{
    if (this->fixed_point > obj.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator < ( const Fixed &obj) const
{
    if (this->fixed_point < obj.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator >= ( const Fixed &obj) const
{
    if (this->fixed_point >= obj.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator <= ( const Fixed &obj) const
{
    if (this->fixed_point <= obj.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator == ( const Fixed &obj) const
{
    if (this->fixed_point == obj.toFloat())
        return (true);
    return (false);
}

bool Fixed::operator != ( const Fixed &obj) const
{
    if (this->fixed_point != obj.toFloat())
        return (true);
    return (false);
}

Fixed Fixed::operator ++ ( int )
{
    Fixed old;
    old = *this;
    this->fixed_point++;
    return(*this);
}

Fixed Fixed::operator -- ( int )
{
    Fixed old;
    old = *this;
    this->fixed_point--;
    return(*this);
}

Fixed &Fixed::operator ++ (void)
{
	this->fixed_point++;
	return (*this);
}

Fixed &Fixed::operator -- (void)
{
	this->fixed_point--;
	return (*this);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (Fixed &)a;
	return (Fixed &)b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (Fixed &)a;
	return (Fixed &)b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed::~Fixed(){
}

int Fixed::toInt() const{
    return((int)this->fixed_point / (int) 256);
}

float Fixed::toFloat() const{
    return((double)this->fixed_point / (double)(256));
}

Fixed::Fixed(const int i){
    fixed_point = (int) roundf(i * 256);
}

Fixed::Fixed(const float f){
    fixed_point = roundf(f * 256);
    toFloat();
}

std::ostream &operator<< (std::ostream &out, const Fixed &flt)
{
	out << flt.toFloat();
	return out;
}
