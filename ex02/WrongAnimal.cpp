#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << BLU << "Default WrongAnimal is created" << RES << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) {
	std::cout << BLU << "wrongAnimal type: " << type << " is born" << RES << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {
	std::cout << BLU << "wrongAnimal is copied" << RES << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << RED << "wrongAnimal is destroyed" << RES << std::endl;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	
	return *this;
}

std::string	WrongAnimal::getType( void ) const {
	return this->_type;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Some weird wrongAnimal sound" << std::endl;
}
