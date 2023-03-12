#include "Cat.hpp"

Cat::Cat( void ): Animal( "Cat" ) {
	std::cout << BLU << "Cat is born" << RES << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( Cat const &src ): Animal( src ) {
	*this = src;
	std::cout << BLU << "Cat is copied" << RES << std::endl;
}

Cat::~Cat( void ) {
	std::cout << RED << "Cat is left" << RES << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=( Cat const &rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	
	return *this;
}

void Cat::makeSound( void ) const {
	std::cout << GRN << "Cat: \"...\"" << RES << std::endl;
}

Brain *Cat::getBrain( void ) const {
	return this->_brain;
}
