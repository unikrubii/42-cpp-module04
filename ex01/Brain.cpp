#include "Brain.hpp"

Brain::Brain( void ) {
	for ( int i = 0; i < 100; i++ ) {
		this->_ideas[i] = "idea #" + std::to_string(i);
	}
	std::cout << "Brain Brain Brain" << std::endl;
}

Brain::Brain( Brain const &src ) {
	*this = src;
	std::cout << "Brain is Duped" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain is destroyed" << std::endl;
}

Brain &Brain::operator=( Brain const &rhs ) {
	if ( this != &rhs ) {
		for ( int i = 0; i < 100; i++ ) {
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

std::string Brain::getIdea( int i ) const {
	if ( i < 0 || i > 99 ) {
		std::cout << RED << "No brain for you to get" << RES << std::endl;
		return "";
	}
	return this->_ideas[i];
}

void Brain::setIdea( int i, std::string idea ) {
	if ( i < 0 || i > 99 ) {
		std::cout << RED << "No brain for you to set" << RES << std::endl;
		return ;
	}
	this->_ideas[i] = idea + " #" + std::to_string(i);
}
