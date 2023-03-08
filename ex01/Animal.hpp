#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal( void );
		Animal( std::string type );
		Animal( Animal const &src );
		virtual ~Animal( void );

		Animal	&operator=( Animal const &rhs );

		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif
