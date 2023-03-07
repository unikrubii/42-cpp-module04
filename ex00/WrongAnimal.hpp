#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include "../color.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &src );
		virtual ~WrongAnimal( void );

		WrongAnimal	&operator=( WrongAnimal const &rhs );

		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif
