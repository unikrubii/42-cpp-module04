#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal( "WrongCat" ) {
	std::cout << BLU << "WrongCat is born" << RES << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const &src ): WrongAnimal( src ) {
	*this = src;
	std::cout << BLU << "WrongCat is copied" << RES << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << RED << "WrongCat is left" << RES << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const &rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	
	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << GRN << "Yeah boi" << RES << std::endl;
}
