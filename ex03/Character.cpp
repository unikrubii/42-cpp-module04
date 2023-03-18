#include "Character.hpp"

Character::Character( void ) {
}

Character::Character( std::string name ) : _name( name ) {
}

Character::Character( Character const &src ) : _name( src._name ) {
	*this = src;
}

Character::~Character( void ) {
}

Character &Character::operator=( Character const &rhs ) {
	if ( this != &rhs ) {
		this->_name = rhs._name;
	}
	return *this;
}

std::string const &Character::getName( void ) const {
	return this->_name;
}

void Character::equip( AMateria* m ) {
	for ( int i = 0; i < 4; i++ ) {
		if ( this->_inventory[ i ] == NULL ) {
			this->_inventory[ i ] = m;
			break;
		}
	}
}

void Character::unequip( int slot ) {
	if ( slot >= 0 && slot < 4 ) {
		for ( int i = 0; i < 100; i++ ) {
			if ( this->_floor[ i ] == NULL ) {
				this->_floor[ i ] = this->_inventory[ slot ];
				break;
			}
		}
		this->_inventory[ slot ] = NULL;
	}
	else {
		std::cout << RED << "Invalid slot" << RES << std::endl;
	}
}

void Character::use( int idx, ICharacter& target ) {
	if ( idx >= 0 && idx < 4 ) {
		if ( this->_inventory[ idx ] != NULL ) {
			this->_inventory[ idx ]->use( target );
		}
		else {
			std::cout << RED << "No materia in slot " << idx << RES << std::endl;
		}
	}
	else {
		std::cout << RED << "Invalid slot" << RES << std::endl;
	}
}
