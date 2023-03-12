#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << BLU << "Default animal is created" << RES << std::endl;
}

Animal::Animal( std::string type ) {
	std::cout << BLU << "Animal type: " << type << " is born" << RES << std::endl;
	this->_type = type;
}

Animal::Animal( Animal const &src ) {
	std::cout << BLU << "Animal is copied" << RES << std::endl;
	*this = src;
}

Animal::~Animal( void ) {
	std::cout << RED << "Animal is destroyed" << RES << std::endl;
}

Animal &Animal::operator=( Animal const &rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	
	return *this;
}

std::string	Animal::getType( void ) const {
	return this->_type;
}

void	Animal::makeSound( void ) const {
	std::cout << "Some animal sound" << std::endl;
}
