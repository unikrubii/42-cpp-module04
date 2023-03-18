#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {
}

Ice::Ice( Ice const & src ) : AMateria( src ) {
	*this = src;
}

Ice::~Ice( void ) {
}

Ice & Ice::operator=( Ice const & rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria* Ice::clone( void ) const {
	return new Ice( *this );
}

void Ice::use( ICharacter & target ) {
	std::cout << CYN << "* shoots an ice bolt at " << target.getName() << " *" << RES << std::endl;
	AMateria::use( target );
}
