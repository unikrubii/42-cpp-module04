#include "Dog.hpp"

Dog::Dog( void ): Animal( "Dog" ) {
	std::cout << BLU << "Dog is born" << RES << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( Dog const &src ): Animal( src ) {
	*this = src;
	std::cout << BLU << "Dog is copied" << RES << std::endl;
}

Dog::~Dog( void ) {
	std::cout << RED << "Dog is running away" << RES << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=( Dog const &rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	
	return *this;
}

void Dog::makeSound( void ) const {
	std::cout << YEL << "Dog: \"...\"" << RES << std::endl;
}

Brain *Dog::getBrain( void ) const {
	return this->_brain;
}
