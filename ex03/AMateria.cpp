#include "AMateria.hpp"

AMateria::AMateria( void ) {
}

AMateria::AMateria( std::string type ) : _type( type ) {
}

AMateria::AMateria( AMateria const &src ) : _type( src._type ) {
	*this = src;
}

AMateria::~AMateria( void ) {
}

std::string const &AMateria::getType( void ) const {
	return this->_type;
}

void AMateria::use( ICharacter &target ) {
	(void)target;
}
