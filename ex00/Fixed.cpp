#include "Fixed.hpp"

Fixed::Fixed() : value(0) { 
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
 }

Fixed::Fixed(const Fixed &fixed) { 
	std::cout << "Copy constructor called" << std::endl;
	
	//this->value = fixed.getRawBits();
	*this = fixed;
} 

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &fixed) {
		value = fixed.getRawBits();
	} 
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;

	return value;
}

void	Fixed::setRawBits(const int raw) {
	value = raw;
}
