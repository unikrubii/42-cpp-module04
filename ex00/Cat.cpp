#include "Cat.hpp"

Cat::Cat( void ): Animal( "Cat" ) {
	std::cout << BLU << "Cat is born" << RES << std::endl;
	this->_type = "Cat";
}

Cat::Cat( Cat const &src ): Animal( src ) {
	*this = src;
	std::cout << BLU << "Cat is copied" << RES << std::endl;
}

Cat::~Cat( void ) {
	std::cout << RED << "Cat is left" << RES << std::endl;
}

Cat &Cat::operator=( Cat const &rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << GRN << "Meow" << RES << std::endl;
}
