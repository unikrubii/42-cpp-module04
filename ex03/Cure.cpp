#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {
}

Cure::Cure( Cure const &src ) : AMateria( src ) {
}

Cure::~Cure( void ) {
}

Cure &Cure::operator=( Cure const &rhs ) {
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria* Cure::clone( void ) const {
	return new Cure( *this );
}

void Cure::use( ICharacter &target ) {
	std::cout << GRN << "* heals " << target.getName() << "'s wounds *" << RES << std::endl;
	AMateria::use( target );
}
