#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	this->_count = 0;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
	*this = src;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < this->_count; i++) {
		delete this->_materia[i];
	}
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ) {
	if ( this != &rhs ) {
		for (int i = 0; i < this->_count; i++) {
			delete this->_materia[i];
		}
		this->_count = rhs._count;
		for (int i = 0; i < this->_count; i++) {
			this->_materia[i] = rhs._materia[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria( AMateria* m ) {
	if (this->_count < 4) {
		this->_materia[this->_count] = m;
		this->_count++;
	}
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < this->_count; i++) {
		if (this->_materia[i]->getType() == type) {
			return this->_materia[i]->clone();
		}
	}
	return NULL;
}
