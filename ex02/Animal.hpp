#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
		Animal( void );
		Animal( std::string type );
		Animal( Animal const &src );

		Animal	&operator=( Animal const &rhs );

	public:
		virtual ~Animal( void );

		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
		virtual Brain	*getBrain( void ) const = 0;
};

#endif
